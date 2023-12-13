/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 四 11/23 11:42:53 2023
*********************************************************/

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD (int)(1e9+7)
#define MAXN 1005

int n, m;
char mp[MAXN][MAXN];
string ans;
bool vis[MAXN][MAXN];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
char mv[] = {'R', 'L', 'D', 'U'};
pair<int, char> dp[MAXN][MAXN];

bool checkInside(int y, int x) {
  return (y >= 0 && y < n && x >= 0 && x < m); 
} 

int dfs(int y, int x) { 
  if(mp[y][x] == 'B') {
    return 1;
  } 

  if(dp[y][x].ff < INF) {
    return dp[y][x].ff + 1;
  }
  
  for(int i = 0; i < 4; i++) {
    pair<int, char> now = {INF, mv[i]};
    int curY = y + dy[i];
    int curX = x + dx[i];
    if(checkInside(curY, curX) && !vis[curY][curX]) {
      vis[curY][curX] = true;
      now.ff = dfs(curY, curX);
      vis[curY][curX] = false;
    }

    if(now.ff < dp[y][x].ff) {
      dp[y][x] = now;
    }
  }

  return dp[y][x].ff + 1;
}

void bottomUp(int y, int x, int now) {
  
  if(now == 0) {
    return;
  }

  for(int i = 0; i < 4; i++) {
    int curY = y + dy[i];
    int curX = x + dx[i];
    if(dp[curY][curX].ff == now) {
      ans += dp[curY][curX].ss;
      bottomUp(curY, curX, now-1);
      return;
    }
  }
  return;
}

void solve(){
  cin >> n >> m;
  string ss;
  pair<int, int> start;
  for(int i = 0; i < n; i++) {
    cin >> ss;
    for(int j = 0; j < m; j++) {
      mp[i][j] = ss[j];
      if(mp[i][j] == 'A') {
        start = {i, j};
      }
      vis[i][j] = (mp[i][j] == '#' || mp[i][j] == 'A');
    }
  }


  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) {
  //     cout << vis[i][j];
  //   }
  //   cout << "\n";
  // }
  //
  // cout << "\n";
  //

  dfs(start.ff, start.ss);


  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) {
  //     if(dp[i][j].ff == INF) {
  //       dp[i][j].ff = 0;
  //     }
  //     cout << dp[i][j].ff << " ";
  //   }
  //   cout << "\n";
  // }
  //

  if(dp[start.ff][start.ss].ff == INF) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  cout << dp[start.ff][start.ss].ff << "\n";
  ans = dp[start.ff][start.ss].ss;
  bottomUp(start.ff, start.ss, dp[start.ff][start.ss].ff - 1);
  cout << ans << "\n";

  return;
}

signed main(){
  for(int i = 0; i < MAXN; i++) {
    for(int j = 0; j < MAXN; j++) {
      dp[i][j].ff = INF;
    }
  }
  fastIO
  solve();
  return 0;
}
