#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,cases;
    cin>>t;
    for (cases=1; cases<=t; cases++) {
        int x;
        cin>>x;

        int digitnum = x%10;
        int result= (digitnum-1)*10;

        string s = to_string(x);
        int len = s.size();
        if (len==1)
            result++;
        else if (len==2)
            result+=3;
        else if (len==3)
            result+=6;
        else
            result+=10;

        cout<<result<<endl;
    }
}
