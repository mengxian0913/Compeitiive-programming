/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二  9/19 19:29:19 2023
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
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
    }

    int now = 0;

    sort(arr.rbegin(), arr.rend());

    int Lptr = 0, Rptr = n - 1;
    while(Lptr <= Rptr){
        int now = arr[Lptr];
        if(now + arr[Rptr] <= x){
            Rptr--;
        }
        Lptr++;
        ans++;
    }


    cout << ans << "\n";
}

signed main(){
    fastIO
    solve();
    return 0;
}
