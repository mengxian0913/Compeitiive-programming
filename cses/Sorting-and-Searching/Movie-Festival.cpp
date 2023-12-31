/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 10/18 02:46:31 2023
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

bool cmp(pair<int, int>a, pair<int, int>b) {
  if(a.ss != b.ss) {
    return a.ss < b.ss;
  }
  return false;
}

void solve(){
  int n, s, e;
  cin >> n;
  vector<pair<int, int>> line;
  for(int i=0; i<n; i++) {
    cin >> s >> e;
    line.pb({s, e});
  }

  sort(all(line), cmp);

  int now = line[0].ss, ans = 1;
  for(int i = 1; i < n; i++) {
    if(line[i].ff >= now) {
      now = line[i].ss;
      ans++;
    }
  }

  cout << ans << "\n";

  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
