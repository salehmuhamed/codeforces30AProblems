#include<iostream>
#include <vector>
#include <algorithm>
#include<deque>
using namespace std;
int main()
{
	int t,co =0; cin >> t;
	vector<vector<int>>vec(t);
	while(t){
	
	int N,K;
	scanf("%d", &N);
	scanf("%d", &K);
	int arr[N];
	for (int i = 0; i < N; ++i) {
		scanf("%d",&arr[i]);	
	}
	deque<int>deq;

	vector<int>answer;	
	for (int i = 0; i < K; ++i) {
	deq.push_back(arr[i]);
	}
	vec[co].push_back(*max_element(deq.begin(),deq.end()));
	// Check MaX
	for (int l=K; l < N; l++)
	{
		deq.push_back(arr[l]);
		deq.pop_front();
		vec[co].push_back(*max_element(deq.begin(),deq.end()));
			
	}
	co++;	
	t--;	
}
	int op;
	for (op = 0;op  < vec.size(); op++) {
	
		for (int k=0; k < vec[op].size(); k++ )
		{
			printf("%d ", vec[op][k]);
		}
			printf("\n");
	}





}
