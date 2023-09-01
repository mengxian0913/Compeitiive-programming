/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 二  8/29 21:33:56 2023
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

string smid;
vector<pair<char, int>> s1, s2;

void solve(){
    string ss;
    cin >> ss;
    unordered_map<char, int> counter;
    for(char i : ss){
        counter[i]++;
    }

    bool recoder = false;

    for(auto i : counter){
        
        if(i.ss & 1){
            if(ss.size() & 1){
                if(!recoder){
                    recoder ^= 1;
                    smid = i.ff;
                    i.ss--;
                }

                else{
                    cout << "NO SOLUTION\n";
                    return;
                }
            }

            else{
                cout << "NO SOLUTION\n";
                return;
            }
        }

        
        if(i.ss > 0){
            int cnt = i.ss / 2;
            s1.pb({i.ff, cnt});
            s2.pb({i.ff, cnt});
        }
    }

    for(int i=0;i<s1.size();i++){
        while(s1[i].ss){
            s1[i].ss -= 1;
            cout << s1[i].ff;
        }
    }

    cout << smid;

    for(int i=s2.size()-1;i>=0;i--){
        while(s2[i].ss){
            s2[i].ss -= 1;
            cout << s2[i].ff;
        }
    }

    cout << "\n";

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
