/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二 10/24 15:38:33 2023
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
  int n, m, sum = 0, ans = 0;
  cin >> n >> m;
  vector<int> arr(n);
  for(int &i : arr) {
    cin >> i;
  }
  map<int, int> mp;

  for(int i : arr) {
    sum += i;
    if(sum == m) ans++;
    if(mp.count(sum - m)) {
      ans += mp[sum - m];
    }
    mp[sum]++;
  }
  cout << ans << "\n";
}

signed main(){
  fastIO
  solve();
  return 0;
}
