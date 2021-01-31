#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n,sum=0,counter=0,temp=0; cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        sum+=array[i];
    }
    sort(array.begin(),array.end());
    for (int i = n-1; i >= 0; --i) {
        temp+=array[i];
        counter++;
        if (temp>(sum/2))
        {
            cout << counter;
            break;
        }
    }

}
