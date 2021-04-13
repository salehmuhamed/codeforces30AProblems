
/*

██╗░░██╗███████╗███████╗██████╗░░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗██╗███╗░░██╗░██████╗░██╗
██║░██╔╝██╔════╝██╔════╝██╔══██╗░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░██║
█████═╝░█████╗░░█████╗░░██████╔╝░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░██║██╔██╗██║██║░░██╗░██║
██╔═██╗░██╔══╝░░██╔══╝░░██╔═══╝░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░██║██║╚████║██║░░╚██╗╚═╝
██║░╚██╗███████╗███████╗██║░░░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗██║██║░╚███║╚██████╔╝██╗
╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝
// PROBLEM LINK: https://www.hackerrank.com/challenges/cpp-lower-bound/problem 
// PROBLEM NAME: Lower Bound-STL

I hope this solution help you :)!
*/
#include <iostream>
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
#include <iterator>
using namespace std;
int main()
{
int temp,n,q; cin >> n; vector<int>vec;
for (int i = 0; i < n; ++i) {
cin >> temp; vec.push_back(temp);
}
cin >> q;
auto end=vec.end(), be=vec.begin();
for (int i = 0; i < q; ++i) {
cin >> temp; auto f= find(be,end,temp);
if (f!=end)
{
	cout << "Yes " << (f-be +1) << endl;
} else 
{
	auto low=lower_bound(be,end,temp);
	cout << "No " << (low - be+1) << endl;
}

}




}
/* 

▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
█▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
*/

