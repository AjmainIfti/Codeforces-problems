#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    long long i, arr[d];
    for(i=0; i<d; i++)
        arr[i] = 1;
    for(i=k-1; i<d; i+=k){
        if(arr[i]!=0)
            arr[i]=0;
    }
    for(i=l-1; i<d; i+=l){
        if(arr[i]!=0)
            arr[i]=0;
    }
    for(i=m-1; i<d; i+=m){
        if(arr[i]!=0)
            arr[i]=0;
    }
    for(i=n-1; i<d; i+=n){
        if(arr[i]!=0)
            arr[i]=0;
    }

    long long Count=0;
    for(i=0; i<d; i++){
        if(arr[i]!=0)
            Count++;
    }
        cout<<d-Count;
}
