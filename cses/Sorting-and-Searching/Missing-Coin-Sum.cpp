/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 日 10/22 00:33:34 2023
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
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(all(arr));
  int R = 0;
  for(int i = 0; i < n; i++) {
    if(R + 1 < arr[i]) {
      cout << R + 1 << "\n";
      return;
    }
    R += arr[i];
  }

  cout << R + 1 << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
} 
