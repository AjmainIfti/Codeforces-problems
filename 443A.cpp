#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    set<char> s1;
    int i;
    for (i=1; i<s.size()-1; i=i+3)
        s1.insert(s[i]);

    cout<<s1.size();
}
