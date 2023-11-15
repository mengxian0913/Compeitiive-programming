/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 19:27:01 2023
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
#define MAXN 15

int mp[MAXN][MAXN];

bool check(int y, int x) {
  bool checkW = false;
  bool checkB = false;
  for(int i = y - 1; i >= 0; i--) {
    if(mp[i][x] == 0) break;
    if(!checkW) {
      checkW = (mp[i][x] == 2); 
    } else if(!checkB) {
      checkB = (mp[i][x] == 1);
    }
  }

  if(checkW && checkB) {
    cout << 1 << '\n';
    return 1;
  }
  
  checkB = checkW = false;

  for(int i = y + 1; i < 8; i++) {
    if(mp[i][x] == 0) break;
    if(!checkW) {
      checkW = (mp[i][x] == 2); 
    } else if(!checkB && mp[i][x] == 1) {
      checkB = true;
    }
  }


  if(checkW && checkB) {
    cout << 2 << "\n";
    return 1;
  }

  checkB = checkW = false;


  for(int i = x - 1; i >= 0; i--) {
    if(mp[y][i] == 0) break;
    if(!checkW) {
      checkW = (mp[y][i] == 2); 
    } else if(!checkB) {
      checkB = (mp[y][i] == 1);
    }
  }

  if(checkW && checkB) {
    cout << 3 << "\n";
    return 1;
  }
  
  checkB = checkW = false;

  for(int i = x + 1; i < 8; i++) {
    if(mp[y][i] == 0) break;
    if(!checkW) {
      checkW = (mp[y][i] == 2); 
    } else if(!checkB) {
      checkB = (mp[y][i] == 1);
    }
  }

  if(checkW && checkB) {
    cout << 4 << "\n";
    return 1;
  }

  checkB = checkW = false;

  for(int i = y - 1, j = x - 1; i >= 0 && j >= 0; i--, j--) {
    if(mp[i][j] == 0) break;
    if(!checkW) {
      checkW = (mp[i][j] == 2);
    } else if(!checkB) {
      checkB = (mp[i][j] == 1);
    }
  }

  if(checkW && checkB) {
    cout << 5 << "\n";
    return 1;
  }

  checkB = checkW = false;

  for(int i = y + 1, j = x + 1; i < 8 && j < 8; i++, j++) {
    if(mp[i][j] == 0) break;
    if(!checkW) {
      checkW = (mp[i][j] == 2);
    } else if(!checkB) {
      checkB = (mp[i][j] == 1);
    }
  }

  return (checkW && checkB);
}

void solve(){
  for(int i = 0; i < 8; i++) {
    for(int k = 0; k < 8; k++) {
      cin >> mp[i][k];
    }
  }

  int tot = 0;

  for(int i = 0; i < 8; i++) {
    for(int k = 0; k < 8; k++) {
      if(mp[i][k] == 0) {
        if(check(i, k)) {
          cout << i << " " << k << "\n";
          tot++;
        }
      }
    }
  }

  cout << tot << "\n";
  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
