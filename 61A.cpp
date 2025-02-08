#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s1, s2, result;
    cin>>s1>>s2;
    result.resize(s1.size());
    int i;
    for(i=0; i<s1.size(); i++){
        if(s1[i] != s2[i])
            result[i] = '1';
        else
            result[i] = '0';
    }
    cout<<result;
}
