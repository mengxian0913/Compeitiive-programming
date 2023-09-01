/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二  8/29 21:12:30 2023
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
    int a, b;
    cin >> a >> b;

    if(min(a, b) * 2 < max(a, b)){
        cout << "NO\n";
        return;
    }
    a %= 3;
    b %= 3;

    if((a + b) % 3 == 0){
        cout << "YES\n";
    }

    else{
        cout << "NO\n";
    }

    return;
}

signed main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
