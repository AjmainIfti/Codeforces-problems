#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2, yo;
    cin>>s1>>s2;
    yo = s1;
    reverse(yo.begin(), yo.end());
    if(s2==yo)
        cout<<"YES";
    else
        cout<<"NO";
}
