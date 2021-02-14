#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int h; cin>>h;
    int n1,n2,hug=0,count=0;
    for (int i = 0; i < (n); ++i) {
        cin >> n1;
        cin >> n2;
        hug+=   (n2-n1) + 1;
    }
    while (hug%h!=0)
    {
        hug++;
        count++;
    }
    cout << count;
}