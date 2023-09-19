/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二  9/19 14:40:34 2023
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
    int n, L_digit = 1, R_digit = 19, base_num = 9, target_digit = 0;
    cin >> n;
    while(L_digit <= R_digit){
        int mid_digit = (L_digit + R_digit) / 2;
        // cout << mid_digit << "\n";
        int Lptr_digit = mid_digit - 1, Rptr_digit = mid_digit;
        Lptr_digit = Lptr_digit * (base_num * pow(10, Lptr_digit - 1));
        Rptr_digit = Rptr_digit * (base_num * pow(10, Rptr_digit - 1));

        if(Lptr_digit <= n && n <= Rptr_digit){
            target_digit = mid_digit; 
            break;
        }

        else if(n < Rptr_digit){
            R_digit = mid_digit - 1;
        }

        else{
            L_digit = mid_digit + 1;
        }
    }

    // cout << "target_digit: " << target_digit << "\n";
    
    int pre_digit = target_digit - 1;
    int pre_val_base = pre_digit * (base_num * pow(10, pre_digit - 1)) + 1;
    int dis_prev = n - pre_val_base;
    int val = dis_prev / target_digit + pow(10, target_digit - 1);
    string res = to_string(val);
    int val_of_digit = dis_prev % target_digit;

    cout << "now number: " << res << "\n";
    // cout << res[val_of_digit] << "\n";

    return;
}

signed main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
