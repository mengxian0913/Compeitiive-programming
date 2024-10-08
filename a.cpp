/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二  9/24 17:46:54 2024
*********************************************************/

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD (int)(1e9+7)

void solve(){
  string ss;
  cin >> ss;
  unordered_map<char, int> mp;
  for(int i = 0; i < ss.size(); i++) {
    mp[ss[i]]++;
  }

  int cnt = 0;
  deque<char> dq;

  for(auto i : mp) {
    if(i.ss & 1) {
      for(int j = 0; j < i.ss; j++) {
        dq.pb(i.ff);
      }
      mp[i.ff] = 0;
      cnt++;
    }
  }

  if(cnt > 1) {
    cout << "IPS\n";
    return;
  }

  for(auto i : mp) {
    for(int j = 0; j < i.ss; j++) {
      if(j & 1) {
        dq.pb(i.ff);
      } else {
        dq.push_front(i.ff);
      }
    }
    i.ss = 0;
  }

  cout << "\n";
  return;
}

signed main(){
  fastIO;
  solve();
  return 0;
}
