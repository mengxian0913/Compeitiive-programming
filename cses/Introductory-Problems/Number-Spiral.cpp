/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 16:59:02 2023
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
    int a, b;
    cin >> a >> b;
    
    int val = max(a, b), dis = abs(a - b);
    val = val * val - (val - 1);


    if(a == b){
        cout << val << "\n";
    }

    else if(a > b){
        if(a & 1) cout << val - dis << "\n";
        else cout << val + dis << "\n";
    }

    else{
        if(b & 1) cout << val + dis << "\n";
        else cout << val - dis << "\n";
    }

    return;
}

signed main(){
    fastIO
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
