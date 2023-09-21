/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  9/ 1 00:59:30 2023
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
    int n;
    cin >> n;

    for(int i=0; i < (1 << n); i++){
        int val = i ^ (i >> 1);
        bitset<32> bs(val);
        string ss = bs.to_string();
        for(int i=32-n; i<32; i++){
            cout << ss[i];
        }
        cout << "\n";
    }

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
