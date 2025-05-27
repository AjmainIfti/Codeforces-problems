#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int a, b, c;
        cin>>a>>b>>c;
        if(a<b && b<c)
            cout<<"STAIR"<<endl;
        else if(a<b && b>c)
            cout<<"PEAK"<<endl;
        else
            cout<<"NONE"<<endl;
    }
}
