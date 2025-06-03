#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        string s;
        cin>>s;
        int countA=0, countB=0;
        for(int i=0; i<5; i++){
            if(s[i]=='A')
                countA++;
            if(s[i]=='B')
                countB++;
        }

        if(countA>countB)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
}
