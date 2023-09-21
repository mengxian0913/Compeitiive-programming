/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 20:51:17 2023
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
   int n, ans = 2, base = 2;
   cin >> n;

   for(int i=0;i<n-1;i++){
        ans = (ans * base) % MOD;
   }

   cout << ans << "\n";
}

signed main(){
    fastIO
    solve();
    return 0;
}
