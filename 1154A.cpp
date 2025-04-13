#include<iostream>
using namespace std;
int main()
{
    long long aplusb, aplusc, bplusc, aplusbplusc;
    long long p, q, r, s;
    cin>>p>>q>>r>>s;
    if(p>q && p>r && p>s){
        aplusbplusc=p;
        aplusb=q;
        aplusc=r;
        bplusc=s;
    }
    if(q>p && q>r && q>s){
        aplusbplusc=q;
        aplusb=p;
        aplusc=r;
        bplusc=s;
    }
    if(r>p && r>q && r>s){
        aplusbplusc=r;
        aplusb=p;
        aplusc=q;
        bplusc=s;
    }
    if(s>p && s>q && s>r){
        aplusbplusc=s;
        aplusb=p;
        aplusc=q;
        bplusc=r;
    }
    long long a, b, c;
    b = abs(((aplusb+bplusc)-aplusc)/2);

    a = abs(aplusb - b);

    c = abs(aplusbplusc - a - b);

    cout<<a<<" "<<b<<" "<<c;
}
