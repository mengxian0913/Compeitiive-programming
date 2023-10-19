/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 10/18 02:21:43 2023
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
  int n;
  cin >> n;
  dp[0] = 0;
  
  for(int i=0; i<=n; i++) {
    string ss = to_string(i);
    for(int j=0; j<ss.size(); j++) {
      int now = (ss[j]-'0');
      if(i - j >= 0) {
        dp[i] = min(dp[i], dp[i - now] + 1);
      }
    }
  }

  cout << dp[n] << "\n";
  return;
}

signed main(){
  fastIO
  for(int i=0;i<MAXN-5;i++) {
    dp[i] = INF;
  }
  solve();
  return 0;
}
