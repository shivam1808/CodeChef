#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int l = s.length();
    string str = s;
    long count=0;

    if(s == "a")
        return n;

    for(int i=0;i<l;i++)
    {
        if(str[i] == 'a')
            count++;    
    }
    int p, x = 0;
    if(n%l == 0)
        return (n/l)*count;
    else {
        p = n%l;
        for(int i=0;i<p;i++){
            if(str[i] == 'a')
                x++;
        }
        return n/l*count + x;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
