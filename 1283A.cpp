#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int h, m;
        cin>>h>>m;
        double mintohour = (double)m / 60;
        double finalhour = (double)h + mintohour;
        double r = (24 - finalhour)*60;
        cout<<r<<endl;
    }
}
