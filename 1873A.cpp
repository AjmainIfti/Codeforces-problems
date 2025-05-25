#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        string s1;
        cin>>s1;

        if(s1=="bca" || s1=="cab")
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
