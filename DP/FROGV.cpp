#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	int N,K,P;
	cin >> N >> K >> P;

    vector<pair<int,int>> arr;
    for(int i=0;i<N;i++)
    {
        int temp;
        cin >>temp;
        arr.push_back(make_pair(temp,i));
    }
    
    sort(arr.begin(),arr.end());
    
    int dp[N];

    dp[arr[N-1].second] = arr[N-1].first + K;
    for(int i=N-2;i>=0; i--)
    {
      
        if(arr[i+1].first -arr[i].first <= K)
        {
            dp[arr[i].second] = dp[arr[i+1].second];
        }
        else
        {
            dp[arr[i].second] = arr[i].first + K;
        }
    }    

    for(int k=0;k<P;k++)
    {
        int a,b;
        cin >> a >> b;
        
        if(dp[a-1] == dp[b-1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
    }
	return 0;
}
