#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {

    vector<string> v; 
    string str = "";
    for (int len = 1; len <= n; len++) 
    {     
        for (int i = 0; i <= n - len; i++) 
        { 
            int j = i + len - 1;             
            for (int k = i; k <= j; k++) 
            {
                str += s[k];
            }
            v.push_back(str);
            str = "";
        }
    }
    int l = v.size();
    int count = 0;
    for(int i=0;i<l;i++)
    {
        string pt = v[i];
        reverse(pt.begin(), pt.end());
        if(pt == v[i])
            count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
