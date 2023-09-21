/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 15:24:23 2023
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
    vector<int> v(n, 0);
    for(int &i:v){
        cin >> i;
    }

    int ans = 0;

    for(int i=0;i<n-1;i++){
        ans += max(v[i] - v[i+1], 0LL);
        v[i+1] = max(v[i], v[i+1]);
    }

    cout << ans << "\n";
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
