#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int l = s.length();
    string str = s;
    long count=0;
    if(s == "a")
        return n;

    while(l<n){
        str = str + str;
        l = str.length();
    }
    l = str.length();
    for(int i=0;i<n;i++){
        if(str[i] == 'a')
            count++;
    }
    cout<<"Count : "<<count<<endl;
    return count;
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
