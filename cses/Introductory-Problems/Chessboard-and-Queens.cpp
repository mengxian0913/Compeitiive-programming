#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define ff first
#define ss second
#define pb push_back
#define em emplace_back
#define all(AA) AA.begin(),AA.end()
 
const int MOD = 1e9 + 7;
const int MAXN = 2e5;
const int INF = 0x3f3f3f3f;
 
/*******************Vincent*******************/
 
string mp[10];
 
int ans = 0;
 
void solve()
{
    for(int i=0;i<8;i++)
    {
        cin >> mp[i];
    }
 
    vector<int> col(8);
 
    iota(all(col), 0);
 
    do
    {
        bool check = true;
        set<int> a, b;
        for(int i=0;i<8; i++)
        {
            if(mp[i][col[i]] == '*')
            {
                check = false;
                break;
            }
        }
 
        for(int i=0;i<8;i++)
        {
            if(a.count(i + col[i]))
            {
                check = false;
                break;
            }
            a.insert(i+col[i]);
        }
 
        a.clear();
 
        for(int i=0; i<8; i++)
        {
            if(a.count(i - col[i]))
            {
                check = false;
                break;
            }
 
            a.insert(i - col[i]);
        }
 
        if(check) ans++;
 
    }while(next_permutation(all(col)));
 
    cout << ans << "\n";
 
    return;
}
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}
