/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 10/18 02:32:25 2023
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
#define MAXN (int)(1e3 + 10)

string mp[MAXN];
int dp[MAXN][MAXN];

void solve(){
  int n;
  cin >> n;
  for(int i=0; i<n;i++) {
    cin >> mp[i];
  }

  if(mp[0][0] == '*') {
    cout << 0 << "\n";
    return;
  }

  // dp[i][j] = dp[i-1][j] + dp[i][j-1];
  dp[0][0] = 1;

  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(mp[i][j] == '*') continue;

      if(i-1 >= 0) {
        dp[i][j] = (dp[i][j] + dp[i-1][j] % MOD) % MOD;
      }

      if(j-1 >= 0) {
        dp[i][j] = (dp[i][j] + dp[i][j-1] % MOD) % MOD;
      }
    }
  }

  cout << dp[n-1][n-1] << "\n";
  return;
}

signed main(){
  fastIO
  memset(dp, 0, sizeof(dp));
  solve();
  return 0;
}
