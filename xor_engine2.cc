#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t,n,q,p,res,c,c1,c2,m;
    cin >> t;
    while(t--)
    {
        c1 = 0, c2 = 0;
        cin >> n >> q;
        long int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            c = __builtin_popcount(a[i]);
            if(c % 2 == 0)
                c1++;
            else
                c2++;
        }
        while(q--)
        {
            cin >> p;
            m = __builtin_popcount(p);
            if(m % 2 == 0)
                cout<<c1<<" "<<c2<<"\n";
            else
                cout<<c2<<" "<<c1<<"\n";
        }
    }
}