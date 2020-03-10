#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[2*1000000];
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i];
	}
	int max = *max_element(arr, arr+n);
	cout<<"Max : "<<max<<endl;
	for (int i = 1; i <= n; ++i)
	{
		if(arr[i]>0)
		{
			int x = arr[i];
			if(arr[i]!=i)
			{
				swap(arr[i], arr[x]);
			}
		}
	}
	for (int i = 1; i <= max; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}