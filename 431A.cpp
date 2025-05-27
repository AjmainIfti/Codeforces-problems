#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int totalcalories = 0;
    for (char c : s) {
        int strip = c - '1';
        totalcalories += a[strip];
    }
    cout << totalcalories << endl;
}
