/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三 11/15 18:29:49 2023
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

/*
123 Tom DTGD
456 Cat CSIE
789 Nana ASIE
321 Lim DBA
654 Won FDD
*/

struct T {
  string id, name, cla;
};

void solve(){
  T arr[5] = {
    {"123", "Tom", "DTGD"},
    {"456", "Cat", "CSIE"},
    {"789", "Nana", "ASIE"}, 
    {"321", "Lim", "DBA"},
    {"654", "Won", "FDD"},
  };


  int n;
  cin >> n;
  while(n--) {
    int t;
    string ss;
    cin >> t >> ss;

    for(int i = 0; i < 5; i++) {
      if(t == 1 && arr[i].id == ss) {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].cla << "\n";
      }

      else if(t == 2 && arr[i].name == ss) {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].cla << "\n";
      }

      else if(t == 3 && arr[i].cla == ss){
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].cla << "\n";
      }
    }
  }

  return;
}

signed main(){
  fastIO
  solve();
  return 0;
}
