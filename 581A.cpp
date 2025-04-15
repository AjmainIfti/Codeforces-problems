#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    int hipt=0, samet=0;
    while(a!=0 && b!=0){
        hipt++;
        a--;
        b--;
    }
    if(a!=0)
        samet = a/2;
    if(b!=0)
        samet = b/2;

    cout<<hipt<<" "<<samet;

}
