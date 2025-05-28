#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        long long x, y, n, k, bubalula;
        cin>>x>>y>>n;
        bubalula = floor(n/x);
        k = x*bubalula + y;
        if(k>n){
            bubalula-=1;
            k = x*bubalula + y;
        }

        cout<<k<<endl;
    }
}
