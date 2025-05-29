#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cases;
    cin>>t;
    cin.ignore();
    for(cases=1; cases<=t; cases++){
        string s;
        getline(cin, s);
        if(s.size()%2!=0)
            cout<<"NO"<<endl;
        else{
            string s1, s2;
            s1.resize(s.size());
            s2.resize(s.size());

            int i;
            for(i=0; i<(s.size()/2); i++)
                s1[i]=s[i];
            for(i=(s.size()/2); i<s.size(); i++)
                s2[i-(s.size()/2)]=s[i];

            if(s1==s2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }
}
