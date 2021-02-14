#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{

string a; cin >> a;
int sum=0,temper=0,i=0,count=0;
    while (a.length()>1)
    {

        if (i==a.length()){
            a= to_string(sum);
            i=0;
            sum=0;
            count++;
        } else
        {
            stringstream temp; temp << a[i];
            temp >> temper;
            sum+=temper;
            i++;
        }

    }
    cout << count;








}





