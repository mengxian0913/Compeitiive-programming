/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 四  9/21 13:41:16 2023
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

multiset<int>ms;

void solve(){
    int n, m, price;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> price;
        ms.insert(price);
    }
    
    int cos;
    while(m--){
        cin >> cos;
        auto it = ms.upper_bound(cos);

        if(it == ms.begin()){
            cout << -1 << "\n";
            continue;
        }

        if(*(--it) <= cos){
            cout << *(it) << "\n";
            ms.erase(it);
        }
        else{
            cout << -1 << "\n";
        }
    }
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
