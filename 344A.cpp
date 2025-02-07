#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    int arr[n], i;
    int Count=0;
    for(i=0; i<n;i++)
        cin>>arr[i];
    for(i=0; i<n-1; i++){
        if(arr[i] != arr[i+1])
            Count++;
    }
    cout<<Count+1;
}
