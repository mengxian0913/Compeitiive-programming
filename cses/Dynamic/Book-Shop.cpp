/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二 10/24 19:42:09 2023
*********************************************************/

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 1e18
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD (int)(1e9+7)
const int MAXN = (int)(1e6 + 10);
int dp[MAXN];


void solve(){
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++) cin >> arr[i].ss;
  for(int i = 0; i < n; i++) cin >> arr[i].ff;

  // for(int i = 0; i <= MAXN - 5; i++) dp[i] = -INF;

  // sort(arr.rbegin(), arr.rend());
  int ans = -INF;
  // dp[0] = 0;
  // dp[cost] = maximum pages
  for(int i = 0; i < n; i++) {
    for(int j = x; j >= 0; j--) {
      if(j - arr[i].ss >= 0) {
        dp[j] = max(dp[j], dp[j-arr[i].ss] + arr[i].ff);
      }
      ans = max(ans, dp[j]);
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
