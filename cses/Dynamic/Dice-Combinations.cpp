/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二 10/17 13:20:16 2023
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
#define MAXN (int)(1e6+10)

int dp[MAXN];

void solve(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= 6; j++) {
      if(i - j > 0) {
        dp[i] = (dp[i] % MOD + dp[i-j] % MOD) % MOD;
      }
    }
  }
  cout << dp[n] % MOD << "\n";
  return;
}

signed main(){
  fastIO
  memset(dp, 0, sizeof(dp));
  for(int i=1; i<=6; i++) {
    dp[i] = 1;
  }
  solve();
  return 0;
}
