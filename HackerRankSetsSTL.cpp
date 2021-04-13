#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
int t; cin >> t;
int i,q; set<int>s;
vector<string>l;
for(int d=0; d < t; ++d)
{
cin >> q >> i;
auto tmp = s.find(i);
if (q==1)
{
	s.insert(i);
} if (q==2){
	if(tmp!= s.end())
	{
		s.erase(tmp);
	}
}
	if (q==3)
	{
		if(tmp!=s.end())
		{
			l.push_back("Yes");		
		}	else l.push_back("No");
	}

}
for(auto &d : l)
{
	cout << d << endl;
}
}	



