#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    int arr[n], i, hard=0;
    for(i=0; i<n; i++){
            cin>>arr[i];
        if(arr[i]==1){
            hard++;
            break;
        }
    }
    if(hard!=0)
        cout<<"HARD";
    else
        cout<<"Easy";
}
