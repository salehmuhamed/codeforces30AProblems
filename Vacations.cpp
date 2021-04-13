    /*
     
    ██╗░░██╗███████╗███████╗██████╗░░██╗░░░░░░░██╗░█████╗░██████╗░██╗░░██╗██╗███╗░░██╗░██████╗░██╗
    ██║░██╔╝██╔════╝██╔════╝██╔══██╗░██║░░██╗░░██║██╔══██╗██╔══██╗██║░██╔╝██║████╗░██║██╔════╝░██║
    █████═╝░█████╗░░█████╗░░██████╔╝░╚██╗████╗██╔╝██║░░██║██████╔╝█████═╝░██║██╔██╗██║██║░░██╗░██║
    ██╔═██╗░██╔══╝░░██╔══╝░░██╔═══╝░░░████╔═████║░██║░░██║██╔══██╗██╔═██╗░██║██║╚████║██║░░╚██╗╚═╝
    ██║░╚██╗███████╗███████╗██║░░░░░░░╚██╔╝░╚██╔╝░╚█████╔╝██║░░██║██║░╚██╗██║██║░╚███║╚██████╔╝██╗
    ╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░░░░╚═╝░░░╚═╝░░░╚════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░╚═╝
    // PROBLEM LINK: https://codeforces.com/contest/699/problem/C
    // PROBLEM NAME: Vacations
    // verdict: WRONG_ANSWER
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
     
    int check(int arr[], int len, char last, int i=0, int rest =0)
    {
    	if(i==len)
    	{
    		return rest;
    	}
    	else if (arr[i]==0) {
    		return check (arr, len, 'r', i+1 , rest+1);
    	}
    	else if (arr[i]==1 && last !='w'){
    		return check (arr, len, 'w', i+1,rest);
    	}
    	else if (arr[i]==2 && last !='s')
    	{
    		return check (arr,len, 's', i+1,rest);
    	} else if (arr[i]==3   && i+1 != len && i != 0)
    	{
    		if (arr[i-1]!=1 && arr[i+1] !=1 )
    	{
    						return check (arr,len,'w',i+1,rest);
    	} else if (arr[i-1] != '2' && arr[i+1] != 2) return check (arr,len,'s',i+1,rest);
    	} else if (arr[i]==3 && i+1 == len)
    	{
    		if (last != 's') {
    			return check (arr,len, 's', i+1,rest);}
    			else if (last != 'w')
    				return check (arr, len ,'w', i+1,rest);
    		}
    	
     
     
    	return check(arr , len , 'r' , i+1 , rest +1 );
     
    }
     
     
     
     
    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l; cin >> l; 
    int arr[l];
    for (int i = 0; i < l; ++i) {
    	cin >> arr[i];	
    }
    cout << check(arr, l, 'f');
     
     
     
    }
    /* 
     
    ▄▀█ █░█ ▀█▀ █░█ █▀█ █▀█ ░░▄▀ █▀ ▄▀█ █░░ █▀▀ █░█ █▀▄▀█ █░█ █░█ ▄▀█ █▀▄▀█ █▀▀ █▀▄
    █▀█ █▄█ ░█░ █▀█ █▄█ █▀▄ ▄▀░░ ▄█ █▀█ █▄▄ ██▄ █▀█ █░▀░█ █▄█ █▀█ █▀█ █░▀░█ ██▄ █▄▀
    */
     


