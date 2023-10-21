/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 六 10/21 19:04:12 2023
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
  sort(all(arr));
  int mid_val = arr[n / 2], tot = 0;

  for(int i : arr) {
    tot += abs(i - mid_val);
  }

  cout << tot << "\n";

  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
