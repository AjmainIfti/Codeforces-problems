#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, i;
    cin>>n;
    double arr[n], sum=0;
    for(i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double result = ((sum/(n*100))*100);
    cout<<showpoint<<fixed<<setprecision(12)<<result;
}
