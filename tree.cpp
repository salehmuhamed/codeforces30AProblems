
/*

██╗░░██╗███████╗███████╗██████╗░░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗██╗███╗░░██╗░██████╗░██╗
██║░██╔╝██╔════╝██╔════╝██╔══██╗░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░██║
█████═╝░█████╗░░█████╗░░██████╔╝░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░██║██╔██╗██║██║░░██╗░██║
██╔═██╗░██╔══╝░░██╔══╝░░██╔═══╝░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░██║██║╚████║██║░░╚██╗╚═╝
██║░╚██╗███████╗███████╗██║░░░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗██║██║░╚███║╚██████╔╝██╗
╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝
// PROBLEM LINK: 
// PROBLEM NAME:
I hope this solution help you :)!


*/
#define INF (10e9)
#include <bits/stdc++.h>
#include <numeric>
#include <array>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>
#include<string>
#include <unordered_set>
#include <unordered_map>
#define begend(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))

using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n; cin >>n;
vector <pair<pair<int,int>,pair<int,int>>>f(n);

for (int i = 0; i < n; ++i) {
	cin >> f[i].first.first;	
	cin >> f[i].first.second;
}
int ans=0;
//caclute

for (int i = 1; i < n; ++i) {
	f[i].second.second=f[i+1].first.first-f[i].first.first;
	f[i].second.first=f[i].first.first-f[i-1].first.first;
}
//av?
	for (int i = 1; i < n-1; ++i) {
		if(f[i].second.second>= f[i].first.second || f[i].second.first >= f[i].first.second) ans++;
	}

cout << ans;




}
/* 

▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
█▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
*/

