#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {
        long long n;
        cin >> n;

        vector<int>v;
        long long place = 1;
        while (n>0) {
            long long digit = n%10;
            if (digit!=0) {
                v.push_back(digit * place);
            }
            n=n/10;
            place=place*10;
        }
        cout<<v.size()<<endl;
        for (auto it : v)
            cout<<it<<" ";
        cout<<endl;
    }


}
