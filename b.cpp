/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一  9/23 19:30:53 2024
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

map<char, int> mp;

bool cmp(pair<char, int>a, pair<char, int>b) {
  if(a.ss != b.ss) return a.ss > b.ss;
  return a.ff < b.ff;
}

void solve(){
  int n;
  string ss;
  cin >> n;
  cin.ignore();
  for(int i = 0; i < n; i++) {
    getline(cin, ss);
    for(int i = 0; i < ss.size(); i++) {
      if(ss[i] <= 'z' && ss[i] >= 'a') {
        mp[towupper(ss[i])]++;
      } else if(ss[i] <= 'Z' && ss[i] >= 'A') {
        mp[ss[i]]++;
      }
    }
  }

  vector<pair<char, int>> arr(mp.begin(), mp.end());

  sort(all(arr), cmp);

  for(auto i : arr) {
    cout << i.ff << ' ' << i.ss << "\n";
  }

  return;
}

signed main(){
  fastIO;
  solve();
  return 0;
}
