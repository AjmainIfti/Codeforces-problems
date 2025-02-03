#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin>>s;
 
    int i;
    int up=0, low=0;
    for(i=0; i<s.size(); i++){
 
        if(s[i]>='A' && s[i]<='Z')
            up++;
        else if(s[i]>='a' && s[i]<='z')
            low++;
    }
    if(up>low){
        for(i=0; i<s.size(); i++)
            s[i] = toupper(s[i]);
    }
    if((up<low)|| up == low){
        for(i=0; i<s.size(); i++)
            s[i] = tolower(s[i]);
    }
 
        cout<<s;
}
