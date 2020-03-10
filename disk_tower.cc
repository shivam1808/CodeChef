#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > Solve (vector<int> arr) {
    int l = arr.size(), j;
    stack <int> s;
    vector<vector<int> > v;

    int max = *max_element(arr.begin(), arr.end());
    for(int i=0;i<l;i++)
    {
        s.push(arr[i]);
        std::vector<int> temp; 
        if(arr[i] || i==l-1)
        {
            int l_s = s.size();
            for(int k = 0; k<l_s; k++)
            {
                int p = s.top();
                s.pop();
                temp.push_back(p);
            }
        }
        v.push_back(temp);
    }
    return v;
}

int main() {

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i_arr = 0; i_arr < N; i_arr++) {
        cin >> arr[i_arr];
    }
    vector<vector<int> > out_ = Solve(arr);
    for (int i_out_ = 0; i_out_ < out_.size(); i_out_++) {
        for (int j_out_ = 0; j_out_ < out_[i_out_].size(); j_out_++) {
            cout << out_[i_out_][j_out_] << " ";
        }
        cout << "\n";
    }
}