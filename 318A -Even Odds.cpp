#include <iostream>
using namespace std;
int main()
{
    long long int numbers, index;
    cin >> numbers >> index;
    if (index <= (( numbers+ 1)/ 2))
    {
        cout << index * 2 - 1 << endl;
    }
    else
    {
        cout << (index - (numbers + 1) / 2) * 2 << endl;
    }
}