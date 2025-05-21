#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int n;
        cin>>n;
        int arr[n];
        int i, j, imposter;
        for(i=0; i<n; i++)
            cin>>arr[i];

        int majority;
        if(arr[0]==arr[1])
            majority = arr[0];
        else
            majority = arr[2];

        for(int i=0; i<n; i++){
            if(arr[i]!=majority)
                imposter=i;
        }

        cout<<imposter+1<<endl;
    }
}
