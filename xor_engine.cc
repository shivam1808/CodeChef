#include<bits/stdc++.h>
using namespace std;

int check_one(int n){
	int count = 0;
	while(n){
		n = n & (n-1);
		count++;
	}

	if(count%2 == 0)
		return 1;
	else 
		return 0;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int N, Q;
		cin>>N>>Q;
		int arr[N];
		for (int i = 0; i < N; ++i)
		{
			cin>>arr[i];
		}
		int P[Q];
		for (int i = 0; i < Q; ++i)
		{
			cin>>P[i];
		}
		for (int i = 0; i < Q; ++i)
		{
			int count = 0;
			for (int j = 0; j < N; ++j)
			{
				int x = P[i] ^ arr[j];
				if(check_one(x)){
					count++;
				}
			}
			cout<<count<<" "<<N-count<<endl;
		}
	}	
	return 0;
}