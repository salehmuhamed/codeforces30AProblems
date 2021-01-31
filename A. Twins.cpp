#include <iostream>
#include <vector>
using namespace std;
int main() {
string keyboard = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
char respectively;
cin >> respectively;
string input;
cin >> input;
    vector<int> array(input.length());
    for (int i = 0; i < input.length(); ++i) {
        int index = keyboard.find(input[i]);
        if (respectively=='R'){
            array[i]=index-1;

        } else             array[i]=index+1;
    }
    for (int i = 0; i < input.length(); ++i) {
        cout << keyboard[array[i]];
    }


}
