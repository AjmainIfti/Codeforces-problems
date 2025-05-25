#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, cases;
    cin>>t;
    for (cases=1; cases<=t; cases++) {
        string b;
        cin>>b;
        cin.ignore();

        string a;
        if (b.size()==2) {
            a=b;
            cout<<a<<endl;
        }
        else {
            vector<char>v;
            v.push_back(b[0]);

            for (int i=1; i<b.size()-1; i++) {
                if (b[i]==b[i+1]) {
                    v.push_back(b[i]);
                    i++;
                }
            }
            v.push_back(b[b.size()-1]);
            for (auto it:v)
                cout<<it;
            cout<<endl;
        }


    }
}
