/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 日 10/22 00:05:18 2023
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

pair<int, int> check(vector<pair<int, int>>& tmp, int a, int b) {
  for(int i = 0; i < tmp.size(); i++) {
    int c = tmp[i].ff, d = tmp[i].ss;
    if(a != c && a != d && b != c && b != d) {
      return {c, d};
    }
  }
  return {-1, -1};
}

void solve(){
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i].ff;
    arr[i].ss = i;
  }

  sort(all(arr));
  map<int, vector<pair<int, int>>> mp;
  for(int i = 0; i < n; i++) {
    for(int k = i + 1; k < n; k++) {
      int now = arr[i].ff + arr[k].ff;
      mp[now].pb({arr[i].ss, arr[k].ss});

      if(mp.count(m - now) == true) {
        vector<pair<int, int>> tmp = mp[m - now];
        pair<int, int> res = check(tmp, arr[i].ss, arr[k].ss);
        if(res.ff != -1 && res.ss != -1) {
          cout << arr[i].ss + 1 << " " << arr[k].ss + 1 << " " << res.ff + 1 << " " << res.ss + 1 << "\n";
          return;
        }
      }
    }
  }

  cout << "IMPOSSIBLE\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
