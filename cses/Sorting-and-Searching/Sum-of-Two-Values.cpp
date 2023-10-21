/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五 10/20 11:28:36 2023
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
  map<int, int> mp;
  vector<int> arr(n);
  bool ch = false;
  for(int i=0; i<n; i++) {
    cin >> arr[i];
    if(mp.count(m-arr[i]) == true) {
      cout << mp[m-arr[i]] + 1 << " " << i + 1 << "\n";
      ch = true;
      break;
    }
    
    else {
      mp[arr[i]] = i;
    }
  }

  if(!ch) {
    cout << "IMPOSSIBLE\n";
  }
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
