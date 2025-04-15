#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int Count=0;
        if(a<b)
            Count++;
        if(a<c)
            Count++;
        if(a<d)
            Count++;

        cout<<Count<<endl;
    }
}
