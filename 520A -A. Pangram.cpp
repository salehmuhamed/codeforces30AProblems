#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int a; cin >> a;
    string input;  
    cin >> input;
    std::transform(input.begin(), input.end(), input.begin(),
        [](unsigned char c) { return std::tolower(c); });
    sort(input.begin(), input.end());
    input.erase(std::unique(input.begin(), input.end()), input.end());

    if (input.length() == 26)
    {
        cout << "YES";
    }
    else cout << "NO";
}