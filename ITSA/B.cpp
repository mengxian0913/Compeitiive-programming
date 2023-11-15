/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 18:04:34 2023
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
  double n, r, d;
  cin >> n >> r >> d;
  n -= r;
  double val = r - d;
  int ans = n / val;
  cout << ans + (n / val == (int)(n / val) * 1.0) << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
