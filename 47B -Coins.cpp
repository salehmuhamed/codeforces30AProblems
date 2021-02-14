#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
char check(string s)
{
    if (s[1]=='>')
    {
        return s[0];
    } else return s[2];
}
void sum(int &a, int &b , int &c, const string& s){
    if (check(s)=='A')
    {
        a++;
    }
    if (check(s)=='B')
    {
        b++;
    }
    if (check(s)=='C')
    {
        c++;
    }
}
int main()
{
    int a=0,b=0,c=0;
string case1,case2,case3; cin >> case1 >> case2 >> case3;
sum(a,b,c,case1);
sum(a,b,c,case2);
sum(a,b,c,case3);
    if (a!=b && b!=c)
    {
        for (int i = 0; i < 3; ++i) {
            if (min({a,b,c,})==a)
            {
                cout << 'A';
                a=100;
            } else   if (min({a,b,c,})==b)
            {
                cout << 'B';
                b=100;
            } else
            if (min({a,b,c,})==c)
            {
                cout << 'C';
                c=100;
            }
        }

    } else cout << "Impossible";

}





