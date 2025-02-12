#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t, k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int a, b;
        cin>>a>>b;
        int remainder = a % b;
        if (remainder == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - remainder << endl;
        }
    }
    return 0;
}
