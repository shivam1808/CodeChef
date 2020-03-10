#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
	std::vector<int> peak;
	printf("Peak: ");
	for (int i = 0; i < n; ++i)
	{
		int num = arr[i], flag = 0;
		int pre = i-1, next = i+1;
		if(pre>=0 && arr[pre]>num)
			flag = 1;
		if(next<n && arr[next]>num)
			flag = 1;
		if(flag == 0){
			//cout<<arr[i]<<" ";
			peak.push_back(i);
		}
	}
	int l = peak.size();
	if(l>1)
		cout<<peak[l-1]-peak[l-2];
	else
		cout<<0;

	printf("\nTrough: ");
	std::vector<int> trough;
	for (int i = 0; i < n; ++i)
	{
		int num = arr[i], flag = 0;
		int pre = i-1, next = i+1;
		if(pre>=0 && arr[pre]<num)
			flag = 1;
		if(next<n && arr[next]<num)
			flag = 1;
		if(flag == 0){
			//cout<<arr[i]<<" ";
			trough.push_back(i);
		}
	}
	l = trough.size();
	if(l>1)
		cout<<trough[l-1]-trough[l-2];
	else
		cout<<0;
	printf("\n");
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	display(arr, n);
}