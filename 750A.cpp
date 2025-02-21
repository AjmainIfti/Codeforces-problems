#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;
    int solve = 0, time = 0;
    int available = 240 - k;
    for(int i=1; i<=n; i++){
        time+=(5*i);
        if(time>available){
            break;
        }
        solve = i;
    }
    cout<<solve;
}
