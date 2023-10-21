/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五 10/20 11:42:17 2023
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
  int n, mx = -INF, now, sum = 0;
  cin >> n;
  vector<int> arr(n);
  for(int &i : arr) {
    cin >> i;
  }

  int tot = 0;
  for(int i = 0 ; i < n; i++) {
    if(tot + arr[i] >= arr[i]) {
      tot += arr[i];
    }
    else {
      tot = arr[i];
    }

    mx = max(mx, tot);
  }
  cout << mx << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
