#include <iostream>
using namespace std;
int main() {
    string a = "ijvxljt";
    int length = a.length(), center, left, right,count=1;
    string answer = a;
    // calculate center
    if (length % 2 == 0) {
        center = (length / 2) -1;
        answer[center]=a[0];
    } else {
        center = (length / 2) ;
        answer[center]=a[0];
        cout << "center is " << center << endl;
    }
    left=center-1;
    right=center+1;
    while (count<=length)
    {
        answer[right]=a[count]; right++; count++;
        answer[left]=a[count]; left--; count++;
        cout << answer << endl;

    }
    cout << answer;


}
