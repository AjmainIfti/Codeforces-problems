#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest, resident, together, bubalula;
    cin>>guest>>resident>>bubalula;

    together = guest+resident;

    if(together.size()!=bubalula.size())
        cout<<"NO";
    else{

        sort(together.begin(), together.end());
        sort(bubalula.begin(), bubalula.end());

        if(together==bubalula)
            cout<<"YES";
        else
            cout<<"NO";

    }
}
