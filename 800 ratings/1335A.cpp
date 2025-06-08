#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {
        long long n;
        cin >> n;
        if (n < 2) {
            cout << 0 << endl;
            continue;
        }
        cout << (n - 1) / 2 << endl;
    }
}
