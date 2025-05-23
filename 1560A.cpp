#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int k;
        cin>>k;

        int i;

        vector<int>v1;
        for(i=1; v1.size()< 1000; i++){
            if(i%3!=0 && (i%10)!=3)
                v1.push_back(i);
        }

        cout<<v1.at(k-1)<<endl;

        }

    }
