/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  9/ 1 01:48:20 2023
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

vector< pair<int, int> > ans;

void tower(int now, int from, int to, int with){
    if(now == 0){
        return;
    }

    tower(now - 1, from, with, to);
    ans.pb({from, to});
    tower(now - 1, with, to, from);
    return;
}

void solve(){
    int n;
    cin >> n;

    tower(n, 1, 3, 2);

    cout << ans.size() << "\n";

    for(pair<int, int> i : ans){
        cout << i.ff << " " << i.ss << "\n";
    }

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
