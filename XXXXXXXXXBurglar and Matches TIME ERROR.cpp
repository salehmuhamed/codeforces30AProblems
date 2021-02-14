#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    long long loop,back,answer=0;
    cin >> back >> loop;
    array<long long , 2>arr[loop];

    for (long long i = 0; i < loop; i++) {
        for (long long j = 1; j >= 0; --j) {
            cin>> arr[i][j];
        }
    }
    sort(arr,arr+loop);
    for (long long i = loop-1; i >= 0; --i) {
        while (arr[i][1]>0 && back > 0) {
            answer+=arr[i][0];
            back--;
            arr[i][1]--;
        }
    }
        cout << answer;

    }





