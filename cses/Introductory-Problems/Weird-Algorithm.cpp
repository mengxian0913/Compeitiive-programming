/*********************************************************
# File Name: a.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 二  8/22 15:18:29 2023
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
    while(n != 1){
        cout << n << " ";

        if(n & 1){
            n = n * 3 + 1;
        }

        else{
            n /= 2;
        }
    }
    cout << n << "\n";
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
