/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二 10/24 14:26:40 2023
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
  int n, m;
  cin >> n >> m;
  vector<int> arr(n);
  for(int &i : arr) {
    cin >> i;
  }
  arr.pb(INF);
  int Lptr = 0, Rptr = 0;
  int now = 0;
  int ans = 0;

  while(Rptr < n + 1 && Lptr <= Rptr) {
    while(now > m) {
      if(Lptr == Rptr) {
        Lptr++;
        Rptr++;
        now = arr[Rptr];
        break;
      }
      else {
        now -= arr[Lptr++];
      }
    }

    if(now == m) ans++;

    now += arr[Rptr];
    Rptr++;
  }

  cout << ans << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
