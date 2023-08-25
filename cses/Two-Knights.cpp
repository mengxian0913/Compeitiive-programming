/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 19:46:27 2023
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
#define MOD 1e9+7

void solve(){
   int n;
   cin >> n;
   for(int i=1;i<=n;i++){
       int tot = ((i * i) * ((i * i) - 1)) / 2;
       int att = 4 * (i - 1) * (i - 2);
       cout << tot - att << "\n";
   }

   return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
