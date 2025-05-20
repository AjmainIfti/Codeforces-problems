#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, cases;
    cin>>t;
    for (cases=1; cases<=t; cases++) {
        int n;
        cin>>n;
        int element;
        vector<int> v;
        for (int i=0; i<n; i++) {
            cin>>element;
            v.push_back(element);
        }

        sort(v.begin(), v.end());

        for (int i=0; i<v.size()-1; i++) {
        if (abs(v[i]-v[i+1])<=1) {
                v.erase(v.begin()+i);
            i--;

            if (v.size()==1) {
                break;
            }
        }
    }
        if (v.size()==1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}
