#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    int Count=0;
    if(a==b || a==c || a==d)
        Count++;
    if(b==c || b==d)
        Count++;
    if(c==d)
        Count++;
 
    cout<<Count;
}
