#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n], i, Max=INT_MIN, Count=0;
    for(i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>Max)
            Max=arr[i];
    }
    for(i=0; i<n; i++){
        if(arr[i]<Max)
            Count+=(Max-arr[i]);
    }
    cout<<Count;
}
