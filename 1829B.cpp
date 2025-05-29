#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int maxlen = 0, curlen = 0;
        for (int i=0; i<n; i++) {
            if (arr[i]==0) {
                curlen++;
                maxlen = max(maxlen, curlen);
            }
            else {
                curlen = 0;
            }
        }
        cout << maxlen << endl;


    }
}

 
