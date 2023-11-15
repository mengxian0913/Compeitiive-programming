/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 19:17:28 2023
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
  cin >> n;
  vector<int> cards(n);
  for(int &i : cards) {
    cin >> i;
  }
  cin >> m;
  vector<int> hand(m);
  for(int &i : hand) {
    cin >> i;
  }

  int tot = 0, cur = 0;
  for(int i : hand) {
    cur = i;
    if(i == 6 || i == 9 || i == 32 || i == 45) {
      tot++;
    }

    else if(i <= 5) {
      cur++;  
    }

    else if(i <= 12){
      cur--;
    }

    else if(i <= 18) {
      cur++; 
    }

    else if(i <= 25) {
      cur--;
    }

    else if(i <= 31) {
      cur++;
    }

    else if(i <= 38) {
      cur--;
    }

    else if(i <= 44) {
      cur++;
    }

    else if(i <= 51) {
      cur--;
    }


    for(int j : cards) {
      if(cur == j) {
        tot++;
        break;
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
