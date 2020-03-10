#include<bits/stdc++.h>
using namspace std;

bool isPeak(int arr[], int n, int num, int i, int j) 
{ 
	if (i >= 0 && arr[i] > num) 
		return false; 

	if (j < n && arr[j] > num) 
		return false; 

	return true; 
}



int main(int argc, char const *argv[])
{
	int k, m;
	cin>>k;
	cin>>m;
	int graph[m];
	for (int i = 0; i < m; ++i)
	{
		
	}
	cout<<optimalTower(graph, m, k)<<endl;
	return 0;
}