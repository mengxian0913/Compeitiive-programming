/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五 10/20 17:13:57 2023
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
int vis[MAXN][MAXN];
string mp[MAXN];

int mv_y[] = {0, 0, 1, -1};
int mv_x[] = {1, -1, 0, 0};

bool check(int y, int x) {
  if(y < 0 || y >= n || x < 0 || x >= m) {
    return false;
  }

  return (vis[y][x] ^ 1);
}

void dfs(int y, int x) {
  for(int i = 0; i < 4; i++) {
    int now_y = y + mv_y[i];
    int now_x = x + mv_x[i];
    if(check(now_y, now_x)) {
      vis[now_y][now_x] = true;
      dfs(now_y, now_x);
    }
  }
  return;
}


void solve(){  
  memset(vis, 0, sizeof(vis));
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> mp[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(mp[i][j] == '#') {
        vis[i][j] = true;
      }
    }
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(!vis[i][j]) {
        ans++;
        vis[i][j] = true;
        dfs(i, j);
      }
    }
  }

  cout << ans << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
