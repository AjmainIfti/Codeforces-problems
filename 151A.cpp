#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x = (k*l)/nl;
    int y = (c*d);
    int z = (p/np);
    int minimum;

    if(x<y && x<z)
        minimum = x;
    else if(y<x && y<z)
        minimum = y;
    else
        minimum = z;
    int result = minimum/n;
    cout<<result;
}
