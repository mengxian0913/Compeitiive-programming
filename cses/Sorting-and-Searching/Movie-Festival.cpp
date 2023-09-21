/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 四  9/21 14:32:06 2023
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
    int n, s, e;
    int ans = -INF, now = 0;
    cin >> n;
    vector<pair<int, int>> arr;

    for(int i=0;i<n;i++){
        cin >> s >> e;
        arr.pb({s, 1});
        arr.pb({e, -1});
    }

    sort(all(arr));

    for(pair<int, int> i : arr){
        now += i.ss;
        ans = max(ans, now);
    }

    cout << ans << "\n";

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
