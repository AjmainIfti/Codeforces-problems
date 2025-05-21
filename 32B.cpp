#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    vector<int> v;

    for(int i = 0; i < s.size(); i++) {
        if (s[i]=='.')
            v.push_back(0);
        else if (s[i]=='-' && i+1 < s.size()) {
            if (s[i+1]=='.') {
                v.push_back(1);
                i++;
            }
            else if (s[i+1]=='-') {
                v.push_back(2);
                i++;
            }
        }
    }

    for (auto it : v)
        cout << it;
}
