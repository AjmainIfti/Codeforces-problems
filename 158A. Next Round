#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    int score[n], i, Count=0;
    for(i=0; i<n; i++)
        cin>>score[i];
    for(i=0; i<n; i++){
        if(score[i]>0 && (score[i]>=score[k-1]))
            Count++;
    }
    cout<<Count;
}
