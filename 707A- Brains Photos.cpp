#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    vector<char> array(n*m);
    for (int i = 0; i < n*m; ++i) {

        cin >> array[i];
    }

    for (int i = 0; i < n*m; ++i) {
        if (array[i] != 'B' && array[i] != 'W' && array[i]!='G') {
            cout << "#Color";
            break;
        }
        if (i == (n * m) - 1)
        {
            cout << "#Black&White";
        }

    }




}