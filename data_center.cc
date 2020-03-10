#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int p;

	p = sqrt(n);
	if(p * p == n)
	{
		cout<<(4*p)<<endl;
	}
	else{
		int c;
		for (int i = 1; i <= p; ++i)
		{
			if(n%i == 0){
				c = i;
			}
		}
		cout<<(2*(c + n/c))<<endl;
	}

	return 0;
}