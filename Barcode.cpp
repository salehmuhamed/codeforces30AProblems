//wrong
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
#include <cmath>
#include <unordered_map>
#define begend(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))

using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int cont=0, n,m,x,y,dots=0,hashs=0; cin >> n >> m >> x >> y;
vector<string>input(n);
vector<pair<int,int>>p;(n);
vector<int>stt(m),tmp;
char major;

for (int i = 0; i < n; ++i) {
	cin >> input[i];
	dots+=count(begend(input[i]),'.');
	hashs+=count(begend(input[i]),'#');
}
dots > hashs ? major = '.' : major = '#';
for (int i = 0; i < m; ++i) {
	for (int j = 0; j < n; ++j) {	
		input[j][i]==major ? cont++ : 0;	
	}
	stt[i]=cont;
	cont=0;

}
//for (auto &i : stt)
//{
//	cout << i << " ";
//}
int half = n/2,ans=0,last[m]={13},repeated=0;
for (int i = 0; i < m; ++i) {

	if (repeated > 0 && repeated < x )
	{
		if (last[i-1] ==0)
		{
			ans += stt[i];
			repeated=0;
		} else 
		{ans += (n-stt[i]);
			repeated=0;}
	} else if (stt[i]>half)
	{
		ans += (n-stt[i]);
		last[i] = 1;
	} else if (stt[i]<half)
	{
		ans += stt[i];
		last[i] =0;
	}






	if (i>1)
	{
	if(last[i-1]==last[i])
	{
		repeated++;
	} else repeated=0;
	}
	if (repeated > y)
	{
			if (last[i-1] =0)
		{
			ans += stt[i];
			repeated=0;
		} else 
		{ans += (n-stt[i]);
			repeated=0;}
		

	}

}

cout << ans << endl;





}
/* 

▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
█▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
*/

