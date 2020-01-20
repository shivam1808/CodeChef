#include<bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int x;
	double y;
	cin>>x>>y;
	if((x+0.5)>y || x%5!=0)
	    cout << fixed << setprecision(2) << y <<endl;
	else
	    cout << fixed << setprecision(2) << y-x-0.50 <<endl;
	return 0;
}
