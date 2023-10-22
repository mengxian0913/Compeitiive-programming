/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 日 10/22 00:52:59 2023
*********************************************************/

#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD (int)(1e9+7)

struct cmp2{
  bool operator ()(const int& a, const int& b){
    return a < b;
  }
};


void solve(){
  int n, m, num;
  cin >> n >> m;
  map<int, int, cmp2> mp;
  for(int i = 0; i < n; i++) {
    cin >> num;
    mp[i+1] = num;
  }

  int a, b;
  while(m--) {
    cin >> a >> b;
    int temp = mp[a];
    mp[a] = mp[b];
    mp[b] = temp;
    int ans = 1;
    
    // for(auto it = mp.begin(); it != mp.end(); it++) {
    //   if(it == mp.end()) {
    //     break;
    //   }
    //   auto nxt = it;
    //   ++nxt;
    //   if(it->ff > nxt->ff) {
    //     ans++;
    //   }
    // }
    // cout << ans << "\n";
  }


    return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
