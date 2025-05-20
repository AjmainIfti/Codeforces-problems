#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, cases;
    cin >> t;
    for (cases=1; cases<=t; cases++) {
        long long a, b;
        cin >> a >> b;

        long long diff = abs(a - b);
        long long moves = diff / 10;
        if (diff % 10 != 0) {
            moves++;
        }

        cout<<moves<<endl;
    }
}
