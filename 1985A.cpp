#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        string a, b, c, d;
        cin>>a>>b;
        c = a;
        d = b;
        c[0] = b[0];
        d[0] = a[0];

        cout<<c<<" "<<d<<endl;
    }
}
