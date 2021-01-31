#include <iostream>
#include <climits>
using namespace std;
int main()
{
string polyhedrons[5]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
int n; cin >> n;
string input[n];
    for (int i = 0; i < n; ++i) {
 
cin >> input[i];
 
    }
long long result=0;
    for (int i = 0; i < n; ++i) {
 
        if (input[i]==polyhedrons[0])
        {
            result+=4;
        }        else if (input[i]==polyhedrons[1])
        {
            result+=6;
        }  else if (input[i]==polyhedrons[2])
        {
            result+=8;
        }  else if (input[i]==polyhedrons[3])
        {
            result+=12;
        }    else if (input[i]==polyhedrons[4])
        {
            result+=20;
        }
 
    }
    cout << result;
}