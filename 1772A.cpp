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
        string A, B;
        A=s[0];
        B=s[2];
        int a=stoi(A);
        int b=stoi(B);
        int c = a+b;
        cout<<c<<endl;
    }
}
