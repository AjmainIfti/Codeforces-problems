#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, Count=0;
    cin>>n;
    while(n!=0){
        if(n>=100){
            Count+=(n/100);
            n=n%100;
        }
        if(n>=20 && n<100){
            Count+=(n/20);
            n=n%20;
        }
        if(n>=10 && n<20){
            Count+=(n/10);
            n=n%10;
        }
        if(n>=5 && n<10){
            Count+=(n/5);
            n=n%5;
        }
        if(n>=1 && n<5){
            Count+=(n/1);
            n=n%1;
        }
    }
    cout<<Count;
}
