#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    string a,b;
    int n,aResult=0,bResult=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (i>0){
            cin >> b;
            if (b==a)
            {
                aResult++;
            } else bResult++;
        } else {
            cin >> a;
            aResult++;
        }
    }
    if (aResult>bResult)
    {cout << a;} else
        cout << b;
}