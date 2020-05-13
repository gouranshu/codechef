//Problem https://www.codechef.com/LRNDSA07/submit/CDQU5
//Editorial https://discuss.codechef.com/t/cdqu5-editorial/8622

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >>T;
	
	//precompute to avoid recomputing dp array
	//for each test case
	long int dp[1000001];
    dp[0] = dp[1] = 0;
    dp[2] = dp[3] = 1;
    dp[4] = 1;
    
    for(int i=5; i<=1000000; i++)
    {
        dp[i] = (dp[i-2]+dp[i-3])%1000000009;
    }
    
	while(T--)
	{
	    int X;
	    cin >>X;
	    cout << dp[X]<< endl;
	}
	return 0;
}