/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  9/ 1 02:04:38 2023
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

vector<string>ans;

void solve(){
    string ss;
    cin >> ss;
    sort(all(ss));

    do{
        ans.pb(ss);
    }while(next_permutation(all(ss)));

    cout << ans.size() << "\n";

    for(string i : ans){
        cout << i << "\n";
    }

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
