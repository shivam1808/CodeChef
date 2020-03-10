#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the threshold value"<<endl;
	int t;
	cin>>t;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[j]-a[i])>=t)
			{
				m=i;
				k=j;
				break;
			}
		}
	}
	cout<<m<<" "<<k<<endl;
}