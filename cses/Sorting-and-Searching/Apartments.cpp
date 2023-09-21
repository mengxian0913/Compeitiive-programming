/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 三  9/13 17:51:55 2023
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> par(n), val(m), keep(n, 0);

    for(int &i : par){
        cin >> i;
    }

    for(int &i : val){
        cin >> i;
    }

    sort(all(par));
    sort(all(val));
    
    int ind = 0, ans = 0, sz = par.size();

    for(int i=0;i<sz;i++){
        while(ind < val.size()){
            if(val[ind] > par[i] && val[ind] - par[i] > k){
                break;
            }
            if(abs(val[ind] - par[i]) <= k){
                ans++;
                ind++;
                break;
            }
            ind++;
        }    
    }

    cout << ans << "\n";

    return;

}

signed main(){
    fastIO
    solve();
    return 0;
}
