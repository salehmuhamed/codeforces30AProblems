#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
string s;
cin >> s;
for (int i = 0; i < s.length(); ++i) {
    if (s[i]=='5')   s[i]='4';
    if (s[i]=='6')  s[i]='3';
    if (s[i]=='7')  s[i]='2';
    if (s[i]=='8') s[i]='1';
    if (s[i]=='9' && i!=0)   s[i]='0';
}
cout << s;
}