/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 日 10/22 00:52:59 2023
*********************************************************/

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()

vector<int> mp, mp2;
int getDis(int a, int b) {
  int res = 0;
  int val_a = mp2[a], val_b = mp2[b]; 
  if(val_a > val_b) swap(val_a, val_b);
  if(mp[val_a - 1] > mp[val_a]) res++;
  if(mp[val_a] > mp[val_a + 1]) res++; 
  if(mp[val_b - 1] > mp[val_b]) res++;
  if(mp[val_b] > mp[val_b + 1]) res++;
  if(val_b - val_a == 1 && mp[val_a] - mp[val_b] > 0) {
    res -= 1;
  }
  return res;
}

void solve() {
  int n, m, val;
  int ans = 1;
  cin >> n >> m; 
  
  mp.resize(n + 2);
  mp2.resize(n + 2);
  for(int i = 1; i <= n; i++) {
    cin >> val;
    mp[val] = i;
    mp2[i] = val;
  }

  mp[0] = mp2[0] = 0;
  mp[n + 1] = mp2[n + 1] = n + 1;

  for(int i = 1; i < n; i++) {
    ans += mp[i] > mp[i + 1];
  }
  
  int a, b;
  while(m--) {
    cin >> a >> b;
    int dis = -getDis(a, b);
    swap(mp[mp2[a]], mp[mp2[b]]);
    swap(mp2[a], mp2[b]);
    int dis2 = getDis(a, b);
    ans += dis+dis2;
    cout << ans << "\n";
  }

  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
