#include <iostream>
using namespace std;
int isPrime(int x)
{
    int flag=0;
    for (int i = 2; i <= (x/2) ; ++i) {
        if(x % i == 0)
        {
            flag=1;
            return 0;
            break;
        }
    }
    if (flag==0)
    return 1;
}
 
int main()
{
    int n, m, temp;
    cin >> n >> m;
    while (true)
    {
        n++;
        if (isPrime(n))
        {
            break;
        }
    }
    temp=n;
    if (temp==m)
    {
        cout << "YES";
    } else cout << "NO";
 
}