/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 18:39:59 2023
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

struct T {
  int a, b, c;
};

bool cmp(T c1, T c2) {
  if(c1.c != c2.c) {
    return c1.c < c2.c;
  }
  return false;
}

void solve(){
  int n;
  cin >> n;
  
  vector<T>arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i].a >> arr[i].b >> arr[i].c;
  }


  sort(all(arr), cmp);

  for(int i = 0; i < n; i++) {
    cout << arr[i].a << " " << arr[i].b << " " << arr[i].c << "\n";
  }
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
