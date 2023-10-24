/*********************************************************
# File Name: a.cpp
# Author: Vincent
# Mail: mengxian0913@gmail.com
# Created Time: 一 10/23 23:33:56 2023
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

void solve()
{
	int n, input;
	cin >> n;
	
	stack<pair<int, int>>data;
	
	for(int i=0;i<n;i++)
	{
		cin >> input;
		
		if(data.empty())
		{
			cout << 0 << " ";
			data.push({input, i+1});
		}
		
		else
		{
			while(!data.empty())
			{
				if(data.top().first < input)
				{
					cout << data.top().second << " ";
					data.push({input, i+1});
					break;
				}
				
				data.pop();
			}
		}
		
		if(data.empty())
		{
			cout << 0 << " ";
			data.push({input, i+1});
		}
	}
	
	return;
}
 
signed main()
{
  fastIO
  solve();
	return 0;
}
