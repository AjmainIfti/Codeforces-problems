#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int a, b, c, medium;
        cin>>a>>b>>c;

        if((b>c && b<a) || (b>a && b<c))
           medium = b;
        if((c>a && c<b) || (c<a && c>b))
            medium = c;
        if((a>b && a<c) || (a<b && a>c))
            medium = a;

        cout<<medium<<endl;

    }
}
