#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, i;
    cin>>n;
    int reciever[n];
    int giver[n];
    for(i=0; i<n; i++){
        cin>>reciever[i];
        giver[i]=i+1;
    }
 
    int pass=1;
    while(pass<n){
        for(i=0; i<n-pass; i++){
            if(reciever[i]>reciever[i+1]){
                swap(reciever[i], reciever[i+1]);
                swap(giver[i], giver[i+1]);
            }
        }
        pass++;
    }
 
    for(i=0; i<n; i++)
        cout<<giver[i]<<" ";
}
