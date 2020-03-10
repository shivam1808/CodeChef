#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) 
{
    
    int l = s.length();
    set<char> st;

    for (int i = 0; i < l; ++i)
    {
        st.insert(s[i]); 
    }

    int len = st.size();
    string str;

    std::vector<string> v;
    for (auto it1 = st.begin(); it1!=st.end();  ++it1)
    {
        for (auto it2 = it1; it2!=st.end();  ++it2)
        {
            str = s;
            if(it1!=it2){
                str.erase(std::remove(str.begin(), str.end(), *it1), str.end());
                str.erase(std::remove(str.begin(), str.end(), *it2), str.end());
                v.push_back(str);
            }
        }  
    }
    int max = 0;
    for (auto it : v)
    {
        int flag = 0;
        string p = it;
        cout<<p<<endl;
        for (int i = 0; i < p.length()-2; ++i)
        {
            if(p[i]!=p[i+2])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            int l = p.length();
            if(l>max)
                max = l;
        }
    }

    if(s.length()==2)
        return s.length();

    if(l<2)
        return 0;

    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
