#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int n;
        cin>>n;
        int result = (n%10) + ((n/10)%10);
        cout<<result<<endl;
    }
}
