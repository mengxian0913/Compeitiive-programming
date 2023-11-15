/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 20:04:59 2023
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
int ans[MAXN][MAXN];
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dx[] = {1, -1, 0, 0, 1, -1, -1, 1};
int tot = 0;

void pt(int y, int x, int m) {
  cout << "m = " << m << "\n";

  if(m == 0) {
    for(int j = x - 1; j >= 0; j--) {
      if(mp[y][j] == 1) return;
      else if(mp[y][j] == 0) {
        tot++;
        cout << y << " " << j << "\n";
        mp[y][j] = 1;
        return;
      }
    }
  }

  else if(m == 1) {
    for(int j = x + 1; j < 8; j++) {
      if(mp[y][j] == 1) return;
      else if(mp[y][j] == 0) {
        tot++;
        mp[y][j] = 1;
        cout << y << " " << j << "\n";
        return;
      }
    }
  }

  else if(m == 2) {
    for(int i = y - 1; i >= 0; i--) {
      if(mp[i][x] == 1) return;
      else if(mp[i][x] == 0) {
        tot++;
        mp[i][x] = 1;
        cout << i << " " << x << "\n";
        return;
      }
    }
  }

  else if(m == 3) {
    for(int i = y + 1; i < 8; i++) {
      if(mp[i][x] == 1) return;
      else if(mp[i][x] == 0) {
        tot++;
        mp[i][x] = 1;
        cout << i << " " << x << "\n";
        return;
      }
    }
  }

  else if(m == 4) {
    for(int i = y - 1, j = x - 1; i >= 0 && j >= 0; i++, j++) {
      if(mp[i][j] == 1) return;
      else if(mp[i][j] == 0) {
        tot++;
        mp[i][j] = 1;
        cout << i << " " << j << "\n";
        return;
      }
    }
  }

  else if(m == 5) {
    for(int i = y + 1, j = x + 1; i < 8 && j < 8; i--, j--) {
      if(mp[i][j] == 1) return;
      else if(mp[i][j] == 0) {
        tot++;
        mp[i][j] = 1;
        cout << i << " " << j << "\n";
        return;
      }
    }
  }

  else if(m == 6) {
    for(int i = y - 1, j = x + 1; i >= 0 && j < 8; i++, j--) {
      if(mp[i][j] == 1) return;
      else if(mp[i][j] == 0) {
        tot++;
        mp[i][j] = 1;
        cout << i << " " << j << "\n";
        return;
      }
    }
  }

  else if(m == 7) {
    for(int i = y + 1, j = x - 1; i < 8 && j >= 0; i--, j++) {
      if(mp[i][j] == 1) return;
      else if(mp[i][j] == 0) {
        tot++;
        mp[i][j] = 1;
        cout << i << " " << j << "\n";
        return;
      }
    }

  }
}

void solve(){
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      cin >> mp[i][j];
    }
  }

  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(mp[i][j] == 2) {
        for(int k = 0; k < 8; k++) {
          int cy = i + dy[k];
          int cx = j + dx[k];
          if(cx >= 0 && cx < 8 && cy >= 0 && cx < 8 && mp[cy][cx] == 2) {
            int ccy = cy + dy[k] * -1;
            int ccx = cx + dx[k] * -1;
            if(ccy < 0 || ccy > 7 || ccx < 0 || ccx > 7) continue;
            pt(cy, cx, k); 
          }
        }
      } 
    }
  }

  cout << tot << "\n";
  return;
}

signed main(){
  fastIO
  memset(mp, 0, sizeof(mp));
  memset(ans, 0, sizeof(ans));
  solve();
  return 0;
}
