#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, arr[n];
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(i=0; i<n; i++)
        cin>>arr[i];
    int Count=0;
    for(i=1; i<n; i++){
        if(arr[i]<minimum && arr[i]<arr[0]){
            minimum=arr[i];
            Count++;
        }
        else if(arr[i]>maximum && arr[i]>arr[0]){
            maximum=arr[i];
            Count++;
        }

    }
        cout<<Count;
}
