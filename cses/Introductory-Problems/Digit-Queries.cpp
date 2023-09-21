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

unordered_map<int, pair<int, int>> range_of_digit;
int base_num = 9;

int power(int dig){
    int temp = 1;
    while(dig--){
        temp *= 10;
    }

    return temp;
}

void generate_digit_range(){
    int sub = 0;

    range_of_digit[0] = {0, 0};

    for(int digit = 1; digit <= 18; digit++){
        int Lptr = 0, Rptr = 0;
        Lptr = range_of_digit[digit - 1].ss + 1;
        Rptr = Lptr + digit * (base_num * power(digit - 1)) - 1;
        range_of_digit[digit] = {Lptr, Rptr};
        // cout << Lptr << " " << Rptr << "\n";
    }

    return;
}



void solve(){
    int n, L_digit = 1, R_digit = 18, target_digit = 0;
    cin >> n;
    while(L_digit <= R_digit){
        int mid_digit = (L_digit + R_digit) / 2;
        pair<int, int> mid_range = range_of_digit[mid_digit];

        if(mid_range.ff <= n && n <= mid_range.ss){
            // cout << mid_range.ff << " " << mid_range.ss << "\n";
            target_digit = mid_digit; 
            break;
        }

        else if(n < mid_range.ss){
            R_digit = mid_digit - 1;
        }

        else{
            L_digit = mid_digit + 1;
        }
    }

    // cout << "digit: " << target_digit << "\n";
    
    int dis = n - range_of_digit[target_digit].ff;
    int num = dis / target_digit + power(target_digit - 1);
    int now_digit = dis % target_digit;
    string res = to_string(num);
    // cout << "Num: " << num << "\n";

    cout << res[now_digit] << "\n";
    


    return;
}

signed main(){
    fastIO
    generate_digit_range();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
