#include <iostream>
using namespace std;
int main()
{
    string paper[4];
    int flag=0;
    for (auto & i : paper) {
        cin >> i;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            char x=paper[i][j];
            for (int k = 0; k < 1; ++k) {
                if (i==3)
                {
                    if (x==paper[i][j-1] ) flag++;
                    if( x==paper[i-1][j] ) flag++;
                    if (x==paper[i-1][j-1]) flag++;
                } else
                {
                    if (x==paper[i][j+1] ) flag++;
                    if( x==paper[i+1][j] ) flag++;
                    if (x==paper[i+1][j+1]) flag++;
                }
            }
            if (flag>=2)
            {
                break;
            } else flag=0;
        }
    }
    if (flag>0)
    {
        cout << "YES";
    } else cout << "NO";
        }