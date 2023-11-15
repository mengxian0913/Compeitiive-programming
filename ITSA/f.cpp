/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 18:46:48 2023
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
#define MAXN 110

int a[MAXN], b[MAXN];

void solve(){
  char oper; 
  bool neg = false;
  cin >> oper;
  string s1, s2;
  cin >> s1 >> s2;

  for(int i = s1.size() - 1, j = MAXN - 1; i >= 0; i--, j--) {
    a[j] = (int)(s1[i] - '0');
  }

  for(int i = s2.size() - 1, j = MAXN - 1; i >= 0; i--, j--) {
    b[j] = (int)(s2[i] - '0');
  }
  
  if(oper == '+') {
    for(int i = MAXN - 1; i >= 5; i--) {
      a[i] = a[i] + b[i];
      a[i - 1] += (a[i] / 10);
      a[i] %= 10;
    }
  }

  else {
    for(int i = 0; i < MAXN; i++) {
      if(a[i] != b[i]) {
        if(a[i] < b[i]) {
          neg = true;
        }
        break;
      }
    }
    
    if(neg) {
      swap(a, b);
    }

    for(int i = MAXN - 1; i >= 5; i--) {
      if(a[i] < b[i]) {
        a[i] += 10;
        a[i - 1]--;
      }
      a[i] -= b[i];
    }
  }

  int start = MAXN - 1;
  for(int i = 0; i < MAXN; i++) {
    if(a[i] != 0) {
      start = i;
      break;
    }
  }

  if(neg) cout << '-';
  for(int i = start; i < MAXN; i++) {
    cout << a[i];
  }

  cout << "\n";
  return;
}

signed main(){
  fastIO
  int t;
  cin >> t;
  while(t--) {
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    solve();
  }
  return 0;
}
