#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin>>n>>h;
    int arr[n], i;
    for(i=0; i<n; i++)
        cin>>arr[i];
    int Count=0;
    for(i=0; i<n; i++){
        if(arr[i]>h)
            Count+=2;
        else
            Count+=1;
    }
    cout<<Count;
}
