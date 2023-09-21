/********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 四  9/21 11:14:34 2023
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

map<char, int> mp;
int mv_x[] = {0, 0, 1, -1};
int mv_y[] = {1, -1, 0, 0};
const int MAXN = 10;
int vis[MAXN][MAXN];
int ans;
string ss;

bool check_side(int cur_x, int cur_y){
   if(cur_x <= 0 || cur_x > 7 || cur_y <= 0 || cur_y > 7){
        return false;
    } 

    return true;
}

void dfs(int x, int y, int depth){


    if(x == 1 && y == 7){
        // cout << depth << "\n";
        if(depth >= ss.size()){
            cout << "great!\n";
            ans++;
        }
        return;
    }

    if(depth >= ss.size()){
        return;
    }

    // cout << x << " " << y << " " << depth << " " << ss[depth] << "\n";
    
    if(ss[depth] != '?'){
        int ind = mp[ss[depth]];

        int cur_x = x + mv_x[ind];
        int cur_y = y + mv_y[ind];
        if(vis[cur_x][cur_y] == 0 && check_side(cur_x, cur_y)){
            vis[cur_x][cur_y] = 1;
            dfs(cur_x, cur_y, depth + 1);
            vis[cur_x][cur_y] = 0;
        }
    }

    else{
        for(int i=0;i<4;i++){
            int cur_x = x + mv_x[i];
            int cur_y = y + mv_y[i];
            if(vis[cur_x][cur_y] == 0 && check_side(cur_x, cur_y)){
                vis[cur_x][cur_y] = 1;
                dfs(cur_x, cur_y, depth + 1);
                vis[cur_x][cur_y] = 0;
            }
        }
    }

    return;
}

void solve(){
    memset(vis, 0, sizeof(vis));
    ans = 0;
    cin >> ss;
    // cout << "size: " << ss.size() << '\n';
    vis[1][1] = 1;
    dfs(1, 1, 0);    
    cout << ans << "\n";
}

signed main(){
    fastIO
    mp['R'] = 2;
    mp['L'] = 3;
    mp['U'] = 0;
    mp['D'] = 1;
    solve();
    return 0;
}
