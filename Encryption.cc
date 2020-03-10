#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    double l = sqrt(s.length());
    int r = floor(l);
    int c = ceil(l);
    string str = "";
    //cout<<"Row = "<<r<<" Column = "<<c<<endl;
    if((r * c) < l) r++;
    int x = 0;
    for (int i = 0; i < r+1; ++i)
    {
        //cout<<"Loop\n";
        for (int j = 0; j < c; j++)
        {
            str = str + s[j*c+i];
        }
        str = str + " ";
    }
    //cout<<str<<endl;
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    //fout << result << "\n";

    fout.close();

    return 0;
}
