/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 15:14:45 2023
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
   string ss;
   cin >> ss;
   int cnt = 1, ans = -INF;
   bool start = false;
   char now = ss[0];
   for(int i=1;i<ss.size();i++){
        if(ss[i] != now){
            now = ss[i];
            ans = max(ans, cnt);
            cnt = 1;
        } 
        else{
            cnt++;
        }
   }

   cout << max(ans, cnt) << "\n";
   return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
