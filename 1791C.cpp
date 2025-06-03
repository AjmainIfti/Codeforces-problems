#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        cin.ignore();

        vector<int>v(s.size());

        for(int i=0;i<s.size();i++)
            v[i]=s[i]-'0';


        if (v.size()==1) {
            cout<<v.size()<<endl;
        }
        else {
            while(v.size()>=0){
                if ((v[0]==1 && v[v.size()-1]==0) || (v[0]==0 && v[v.size()-1]==1)) {
                    v.pop_back();
                    v.erase(v.begin());
                }
                else {
                    break;
                }
            }

            cout<<v.size()<<endl;

        }


    }


}

 
