#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin>>y;
    int a,b,c,d, result;
    while(y>0){
        y++;
        int demoyear=y;
        a = demoyear%10;
        demoyear=demoyear/10;
        b = demoyear%10;
        demoyear=demoyear/10;
        c = demoyear%10;
        demoyear=demoyear/10;
        d = demoyear%10;
 
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<y;
            break;
        }
    }
}
