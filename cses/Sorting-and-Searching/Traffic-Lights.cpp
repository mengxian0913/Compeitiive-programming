/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一 10/23 13:39:41 2023
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

void solve(){
  int n, m, val;
  cin >> n >> m;
  set<int> line;
  multiset<int> dis;
  line.insert(n);
  line.insert(0);
  dis.insert(n);
  while(m--) {
    cin >> val;
    auto it = line.insert(val);
    int prev_val = *prev(it.ff, 1);
    int next_val = *next(it.ff, 1);
    int dis_val = next_val - prev_val;
    auto dis_it = dis.lower_bound(dis_val);
    dis.erase(dis_it);
    dis.insert(val - prev_val);
    dis.insert(next_val - val);
    cout << *dis.rbegin() << " ";
  }
  cout << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
