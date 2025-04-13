#include<bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;

    int i=1, n;
    while (i>0) {
        if ((i*k)%10==0 || (i*k)%10==r) {
            n=i;
            break;
        }
        i++;
    }
    cout << n;

}
