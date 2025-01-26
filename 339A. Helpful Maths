#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin>>s;
    int i, pass=1;
    while(pass<s.size()){
    for(i=0; i<s.size()-pass; i=i+2){
        if(s[i]>s[i+2])
        swap(s[i], s[i+2]);
    }
    pass++;
    }
 
    cout<<s;
}
