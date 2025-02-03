#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    int i;
    int a, b, Max=0, current=0;
    for(i=0; i<n; i++){
        cin>>a>>b;
        current = current- a + b;
        if(current>Max)
            Max=current;
    }
 
    cout<<Max;
}
 
