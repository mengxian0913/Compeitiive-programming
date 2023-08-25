/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 15:10:23 2023
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
    unordered_map<int, int>mp;
    
    int val;
    for(int i=0;i<n-1;i++){
        cin >> val;
        mp[val] = 1;
    }

    for(int i=1;i<=n;i++){
        if(!mp.count(i)){
            cout << i << "\n";
            break;
        }
    }

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
