#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){

        int  minimum = 0;
        int a, b, result;
        result = minimum;
        cin>>a>>b;
        for(int i = a; i<=b; i++){
                minimum = ((i-a) + (b-i));
                if(result>minimum)
                    result = minimum;
        }
        cout<<minimum<<endl;
        }
    }
