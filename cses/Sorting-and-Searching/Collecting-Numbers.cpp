/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 日 10/22 00:52:59 2023
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
  int n;
  cin >> n;
  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i].ff;
    arr[i].ss = i;
  }
  sort(all(arr));
  int ans = 1;

  for(int i = 0; i < n - 1; i++) {
    if(arr[i].ss > arr[i + 1].ss) {
      ans++;
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
