/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 10/18 01:42:42 2023
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
#define MAXN (int)(1e6 + 10)

int dp[MAXN];

void solve(){
  int n, x;
  cin >> n >> x;
  vector<int>arr(n);

  for(int &i : arr) {
    cin >> i;
  }

  dp[0] = 1;
  for(int i : arr) {
    for(int j = 0; j <= x; j++) {
      if(j-i >= 0) dp[j] = (dp[j] + dp[j-i] % MOD) % MOD;
    }
  }

  cout << dp[x] << "\n";
  return;
}

signed main(){
  fastIO
  memset(dp, 0, sizeof(dp));
  solve();
  return 0;
}
