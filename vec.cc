// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_pair(vector<pair<pair<int,int>, string > > &A,string str,int x,int y);
int get_size(vector<pair<string,pair<int,int> > > &A);
void print_values(vector<pair<string,pair<int,int> > > &A);
void sort_pair(vector<pair<string,pair<int,int> > > &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<pair<int,int>, string > > A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				string name;
				cin>>name;
				int x,y;
				cin>>x>>y;
				add_pair(A,name,x,y);
			}
			if(c=='b')
			{
				cout<<get_size(A)<<" ";
			}
			if(c=='c')
			{
				print_values(A);
			}
			if(c=='d')
			{
			 	sort_pair(A);
			}
		
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends
/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<pair<int,int>,string > > &A, string str, int x, int y)
{
     A.push_back(make_pair(make_pair(x,y), str));
}

/* Returns the size of the vector A */
int get_size(vector<pair<pair<int,int>,string > > &A)
{
     return (A.size());
}

/* Prints space separated values of vector A */
void print_values(vector<pair<pair<int,int>, string > > &A)
{
     // Your code here
     for(auto it:A)
     {
         cout <<it.second.second<<" "<< it.first << " " <<it.second.first<<" ";
     }
}

/* Sorts b5 the vector A based on value x and y*/
void sort_pair(vector<pair<pair<int,int>,string > > &A)
{
     // Your code here
    sort(A.begin(), A.end());
}


