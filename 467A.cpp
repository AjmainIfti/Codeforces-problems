#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    int i, Count=0;
    int p, q;
    for(i=0; i<n; i++){
        cin>>p>>q;
        if(q-p >=2)
            Count++;
    }
    cout<<Count;
 
}
