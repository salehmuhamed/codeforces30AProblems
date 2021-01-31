#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
   int left= s.find('|');
  int right= (s.length() - 1) - left;
    string input; cin >> input;
    for (char k : input) {
        if (right >= left){
            s = k + s;
            left++;
        } else if (left >= right)
        {
            s+=k;
            right++;
        }
    }
    if (left != right)
    {
        cout << "Impossible";
    } else cout << s;

}