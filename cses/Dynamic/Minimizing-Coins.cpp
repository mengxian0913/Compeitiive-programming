/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 10/18 01:22:31 2023
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
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for(int &i : arr) {
    cin >> i;
    dp[i] = 1;
  }

  for(int i = 1; i <= x; i++) {
    for(int j = 0; j < n; j++) {
      if(i - arr[j] >= 0) {
        dp[i] = min(dp[i], dp[i - arr[j]] + 1);
      }
    }
  }
  
  if(dp[x] == INF) {
    cout << -1 << "\n";
  }

  else {
    cout << dp[x] << "\n";
  }
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
