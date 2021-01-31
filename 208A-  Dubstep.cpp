#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin >> input;
    string check = "WUB";
    int count=0;
    while (true)
    {
       int i = input.find(check);
        if (i!=-1)
        {
            if (i>0)
            { input.replace(input.find(check), 3, " "); }
            else{
                input.erase(input.find(check), 3);
            }
        } else {cout << input; break;}
    }


}