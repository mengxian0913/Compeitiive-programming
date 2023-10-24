/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一 10/23 13:21:01 2023
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
  int n, val;
  cin >> n;
  vector<int> arr(n), current;
  for(int &i : arr) {
    cin >> i;
    auto it = upper_bound(all(current), i);
    if(it == current.end()) {
      current.pb(i);
    }

    else {
      int idx = (it - current.begin());
      current[idx] = i;
    }
  }

  cout << current.size() << "\n";


  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
