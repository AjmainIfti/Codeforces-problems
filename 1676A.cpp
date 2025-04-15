#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
            string ticket;
            cin>>ticket;
            int sum1, sum2;
            int arr[6], i;
            for(i=0; i<6; i++)
                arr[i] = ticket[i] - '0';
            sum1= arr[0] + arr[1] + arr[2];
            sum2= arr[3] + arr[4] + arr[5];

            if(sum1==sum2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
