#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
            string s;
            cin>>s;
            for(int i=0; i<s.size(); i++)
                s[i]=toupper(s[i]);

            if(s=="YES")
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
