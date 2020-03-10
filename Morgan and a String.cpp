#include <bits/stdc++.h>

using namespace std;

// Complete the morganAndString function below.
string morganAndString(string a, string b) 
{
    int la, lb, i=0, j=0;
    la = a.length();
    lb = b.length();
    string res = "";
    while(i!=la || j!=lb)
    {
        if(a[i]<b[j])
        {
            res = res+a[i];
            i++;
        }
        else
        {
            res = res+b[j];
            j++;
        }       
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = morganAndString(a, b);

        fout << result << "\n";
    }
    fout.close();
    return 0;
}

