/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 15:34:05 2023
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
    int odd = 1, even = 2;

    if(n == 3 || n == 2){
        cout << "NO SOLUTION\n";
        return;
    }

    while(even <= n){
        cout << even << " ";
        even += 2;
    }

    while(odd <= n){
        cout << odd << " ";
        odd += 2;
    }

    
    cout << "\n";
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
