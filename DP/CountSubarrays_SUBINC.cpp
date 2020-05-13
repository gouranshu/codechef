//Problem https://www.codechef.com/LRNDSA07/problems/SUBIN
//Editorial https://discuss.codechef.com/t/subinc-editorial/11708

#include
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T–)
	{
	int N;
	cin >> N;
	int arr[N];

		for(int i=0; i<N; i++)
		{
			cin >> arr[i];
		}
		
		long int res = 0;
		//seqLen denotes the current length of non decreasing sequence 
		//while traversing through the array elements, it gets reset to 1
		//whenever an elem greater than prev elem is encountered.
		int seqLen = 0;

		if(N>0)
		{
			res = 1;
			seqLen = 1;
		}
		
		for(int j=1; j<N; j++)
		{
			if(arr[j] >= arr[j-1])
			{
				res = res+ (seqLen + 1);
				seqLen++;
			}
			else
			{
				res += 1;
				seqLen = 1;
			}
		}
		cout << res << endl;
	}
	return 0;
}