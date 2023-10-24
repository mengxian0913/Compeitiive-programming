/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一 10/23 11:32:16 2023
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
  vector<int> arr(n);
  for(int &i : arr) {
    cin >> i;
  }

  map<int, int> mp;

  int Lptr = 0, Rptr = 0, mx = 1;

  while(Lptr <= Rptr && Rptr < n) {
    int now = arr[Rptr];

    if(!mp.count(now) || mp[now] == -1) {
      mp[now] = Rptr;
      Rptr++;
    }

    else {
      int idx = Lptr;
      while(arr[idx] != now) {
        mp[arr[idx++]] = -1;
      }
      Lptr = mp[now] + 1;
      mp[now] = Rptr;
      Rptr++;
    }

    // cout << Lptr << " " << Rptr << "\n";
    mx = max(mx, Rptr - Lptr);
  }

  cout << mx << "\n";
}

signed main(){
  fastIO
  solve();
  return 0;
}
