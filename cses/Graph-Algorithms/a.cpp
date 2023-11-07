/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 四 11/ 2 16:20:29 2023
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
#define MAXN (int)(1010)

int steps[MAXN][MAXN];
bool vis[MAXN][MAXN];

string mp[MAXN];

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

bool check(int y, int x) {
  if(y < 0 || x < 0 || y >= n || x >= m || vis[y][x] == true) {
    return 0;
  } 
  return 1;
}

void dfs(int y, int x) {
  if(mp[y][x] == 'B') {
    return 1;
  }

  int MIN = INF;
  
  for(int i = 0; i < 4; i++) {
    int cur_y = y + dy[i];
    int cur_x  = x + dx[i];
    
    if(check(cur_y, cur_x)) {
      vis[y][x] = true;
      steps[y][x] = min(steps[y][x], dfs(cur_y, cur_x));
      vis[y][x] = false;

    }

  }
}

void solve(){
  memset(steps, 0, sizeof(steps));
  int n, m;
  cin >> n >> m;

}

signed main(){
  fastIO
  solve();
  return 0;
}
