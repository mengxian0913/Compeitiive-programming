/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五 12/15 11:45:15 2023
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

vector<int> dsu;


int findRoot(int x) {
  if(dsu[x] == x) {
    return x;
  }

  return dsu[x] = findRoot(dsu[x]);
}

void solve(){
  int n, q;
  cin >> n >> q;
  dsu.resize(n + 1);
  for(int i = 1; i <= n; i++) {
    dsu[i] = i;
  }

  string method;
  int u, v;
  while(q--) {
    cin >> method >> u >> v;
    if(method == "union") {
      if(u < v) {
        swap(u, v);
      }
      dsu[v] = u;
      findRoot(v);
    }
    
    else {
      // cout << findRoot(u) << " " << findRoot(v) << "\n";
      cout << (findRoot(u) == findRoot(v) ? "YES" : "NO") << "\n"; 
    }
  }

}

signed main(){
  fastIO
  solve();
  return 0;
}
