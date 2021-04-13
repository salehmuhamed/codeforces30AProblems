
/*

██╗░░██╗███████╗███████╗██████╗░░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗██╗███╗░░██╗░██████╗░██╗
██║░██╔╝██╔════╝██╔════╝██╔══██╗░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░██║
█████═╝░█████╗░░█████╗░░██████╔╝░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░██║██╔██╗██║██║░░██╗░██║
██╔═██╗░██╔══╝░░██╔══╝░░██╔═══╝░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░██║██║╚████║██║░░╚██╗╚═╝
██║░╚██╗███████╗███████╗██║░░░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗██║██║░╚███║╚██████╔╝██╗
╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝
// PROBLEM LINK: https://codeforces.com/contest/545/problem/C
// PROBLEM NAME: C. Woodcutters
I hope this solution help you :)!


*/
#define INF (10e9)
#include <bits/stdc++.h>
#include <numeric>
#include <array>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>
#include<string>
#include <unordered_set>
#include <unordered_map>
#define begend(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))

using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


    int n,counter(0);cin>>n;
    vector<pair<int,int>> vc(n+5);
    for(int i=1;i<=n;i++)
    {
        int a,b;cin>>a>>b;
        vc[i]={a,b};
    }
    
    vc[0].first=INT_MIN;
    vc[n+1].first=INT_MAX;
    
    for(int i=1;i<=n;i++)
    {
        if(vc[i].first-vc[i].second>vc[i-1].first)
        {
            counter++;
        }
        else if(vc[i].first+vc[i].second<vc[i+1].first)
        {
            counter++;
            vc[i].first+=vc[i].second;
        }
    }
    cout<<counter;

}
/* 

▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
█▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
*/

