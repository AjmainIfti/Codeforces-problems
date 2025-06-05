#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {

        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        for (long long i=0; i<n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        

        long long maxlen = 1, curlen = 1;
        for (long long i=0; i<n-1; i++) {
            if (abs(v[i]-v[i+1])<=k) {
                curlen++;
                maxlen = max(maxlen, curlen);
            }
            else {
                curlen = 1;
            }
        }

        cout<<(n-maxlen)<<endl;

    }
}
