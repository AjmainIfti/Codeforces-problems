#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i, arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int highest = 0;
    int lowest = 0;
    for(i=0;i<n;i++) {
        if(arr[i]>arr[highest])
            highest = i;
        if(arr[i]<=arr[lowest])
            lowest = i;
    }

    int swapforhighest = highest;
    int swapforlowest = n - lowest - 1;

    int totalswaps;
    if (highest > lowest)
        totalswaps = swapforhighest + swapforlowest - 1;
    else
        totalswaps = swapforhighest + swapforlowest;

    cout<<totalswaps;

}
