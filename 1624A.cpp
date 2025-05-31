#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,cases;
    cin>>t;
    for (cases=1; cases<=t; cases++) {
        int n;
        cin>>n;
        int a[n];
        long long max=LLONG_MIN;
        long long min=LLONG_MAX;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>max) {
                max=a[i];
            }
            if(a[i]<min) {
                min=a[i];
            }
        }

        cout<<max-min<<endl;

    }
}
