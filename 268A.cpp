#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    pair<int,int> arr[n];
    int i, j;
    for(i=0;i<n;i++)
        cin>>arr[i].first>>arr[i].second;

    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if (i==j)
                continue;
            if(arr[i].first == arr[j].second) {
                count++;
            }
        }


    }
    cout<<count;
}
