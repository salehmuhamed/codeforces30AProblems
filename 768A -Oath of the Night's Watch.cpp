#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;
    int temp=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]&&arr[i]<arr[n-1])temp++;
    }
    cout<<temp;


    return 0;


}