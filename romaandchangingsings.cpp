
/*

██╗░░██╗███████╗███████╗██████╗░░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗██╗███╗░░██╗░██████╗░██╗
██║░██╔╝██╔════╝██╔════╝██╔══██╗░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░██║
█████═╝░█████╗░░█████╗░░██████╔╝░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░██║██╔██╗██║██║░░██╗░██║
██╔═██╗░██╔══╝░░██╔══╝░░██╔═══╝░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░██║██║╚████║██║░░╚██╗╚═╝
██║░╚██╗███████╗███████╗██║░░░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗██║██║░╚███║╚██████╔╝██╗
╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝
// PROBLEM LINK: http://codeforces.com/contest/262/problem/B
// PROBLEM NAME: Roma and Changing Signs

I hope this solution help you :)!


*/

#include <numeric>     
#include<bits/stdc++.h>
#include <array>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include<algorithm>
#include<string>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,t; cin >> n >> k;
vector<int>m,p;
for (int i = 0; i < n; ++i) {
	cin >> t;
	t > 0 ? p.push_back(t) : m.push_back(t);	
}
int mins_size=m.size();
int minindx=min_element(p.begin(),p.end())-p.begin();
if (mins_size>0)
{
	if(k>=mins_size)
	{
		int i=0;
		while(i<mins_size)
		{
			m[i]*=-1;
			i++;
			k--;
		}

		if(p.size()>0 && p[minindx] < m[mins_size-1] )
		{
		for (int i = 0; i < k; ++i) {
		p[minindx]*=-1;			
		}
		} else for (int i = 0; i < k; ++i) {
		m[mins_size-1]*=-1;	
		}


	} else {
		
	
		for (int i = 0; i < k; ++i) {
			m[i]*=-1;
		}
	}
} else 
{
	for (int i = 0; i < k; ++i) {
		p[minindx]*=-1;
	}
}

	long long int sum =0;
	sum = accumulate(p.begin(),p.end(),0)+accumulate(m.begin(),m.end(),0);
	cout << sum;	

}
/* 

▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
█▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
*/

