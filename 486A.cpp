#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n, sum;
    cin>>n;
    if(n%2==0)
        sum = n/2;
    if(n%2 != 0)
        sum = ((n+1)/2)*pow(-1, n);
 
    cout<<sum;
}
