#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1, x2, x3, mid, result;
    cin>>x1>>x2>>x3;
    if((x2>x1 && x1>x3) || (x3>x1 && x1>x2)){
        mid=x1;
        result = abs(x2-mid) + abs(x3-mid);
    }
    if((x1>x2 && x2>x3) || (x3>x2 && x2>x1)){
        mid=x2;
        result = abs(x1-mid) + abs(x3-mid);
    }
    if((x1>x3 && x3>x2) || (x2>x3 && x3>x1)){
        mid=x3;
        result = abs(x1-mid) + abs(x2-mid);
    }
    cout<<result;
}
