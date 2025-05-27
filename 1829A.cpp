#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        string s;
        cin>>s;
        string c = "codeforces";
        int i, Count=0;
        for(i=0; i<10; i++){
            if(s[i]!=c[i])
                Count++;
        }
        cout<<Count<<endl;
    }
}
