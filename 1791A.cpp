#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        char c;
        cin>>c;
        if(c== 'c' || c=='o' || c== 'd' || c=='e' || c=='f' || c=='r' || c=='s')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
