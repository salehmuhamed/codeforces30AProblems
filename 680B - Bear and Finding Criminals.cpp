#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

int n; cin >> n;
int different; n%2 == 0 ? different = (n/2) : different = ((n-1)/2);
vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    auto k=unique(s.begin(),s.end());
    s.erase(k,s.end());
    s.size() > different ? cout << "YES" : cout << "NO";
    cout << s.size() << endl << different << endl;

}
