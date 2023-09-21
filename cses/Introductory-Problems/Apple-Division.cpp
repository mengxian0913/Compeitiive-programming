/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  9/ 1 02:07:57 2023
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

vector<int> arr;
int tot = 0, ans = INF;

void dfs(int depth, int now){
    if(depth >= arr.size()){
        ans = min(ans, abs(abs(tot - now) - now));
        return;
    }

    dfs(depth + 1, now);
    dfs(depth + 1, now + arr[depth]);

    return;
}

void solve(){
   int n;
   cin >> n;
   arr.resize(n);
   for(int &i : arr){
       cin >> i;
       tot += i;
   }

   dfs(0, 0);

   cout << ans << "\n";

   return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
