/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 五  8/25 19:48:34 2023
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
    int arr[2] = {1, 3}, ind = 0;
    cin >> n;

    if(((n + 1) * n / 2) & 1){
        cout << "NO\n";
    }

    else{
        cout << "YES\n";
        int set1 = n - 1, set2 = n;
        cout << n / 2 + (n & 1) << "\n";
        ind = 0;
        while(set1 > 0){
            cout << set1 << " ";
            set1 -= arr[ind];
            ind ^= 1;
        }

        cout << "\n";
        
        cout << n / 2 << "\n";
        ind = 1;
        while(set2 > 0){
            cout << set2 << " ";
            set2 -= arr[ind];
            ind ^= 1;
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
