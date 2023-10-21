/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 六 10/21 19:26:03 2023
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
  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i].ff;
    arr[i].ss = i + 1;
  }

  sort(all(arr));
  int index = n - 1;
  
  for(int i = 0; i < n - 2; i++) {
    index = n - 1;
    for(int k = i + 1; k < n - 1; k++) {
      int now = m - (arr[i].ff + arr[k].ff);
      while(index > k) {
        int now = arr[index].ff + arr[i].ff + arr[k].ff; 
        if(now == m) {
          cout << arr[i].ss << " " << arr[k].ss << " " << arr[index].ss << "\n";
          return;
        }
        else if(now > m) {
          index--;
        }

        else {
          break;
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
