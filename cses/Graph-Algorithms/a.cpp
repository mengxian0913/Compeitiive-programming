/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三  2/28 14:59:19 2024
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

string mp[1005];

struct Step {
  pair<int, int> coordinate;
  int steps = 0;
};

queue<Step> q;

void solve(){
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> mp[i];
  }

  Step start;
  int findFlag = false;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(mp[i][j] == 'A') {
        start.coordinate = {i, j};
        start.steps = 0;
        findFlag = true;
        break;
      }
    }
    if(findFlag == true) {
      break;
    }
  }
  cout << start.coordinate.ff << " " << start.coordinate.ss << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
