/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二 10/24 15:42:42 2023
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
#define MAXN (int)(2e5+10)

int n;
bool vis[MAXN];
vector<int> ans;

void dfs(int now, int depth) {
  if(ans.size() == 5) {
    return;
  }

  if(vis[now]) {
    cout << "now: " << now << "\n";
    now = (now + 1 > n ? 1 : now + 1);
    dfs(now, depth);
  }

  if(depth == 0) {
    vis[now] = 1;
    ans.pb(now);
    depth = 1;
    now = (now + 1 > n ? 1 : now + 1);
    dfs(now, depth);
  }

  depth--;
  dfs((now + 1 > n ? 1 : now + 1), depth);
  return;
}

void solve(){
  cin >> n;
  dfs(2, 0);
  for(int i : ans) {
    cout << i << " ";
  }
  cout << "\n";
  return;
}

signed main(){
  memset(vis, false, sizeof(vis));
  fastIO
  solve();
  return 0;
}
