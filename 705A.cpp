#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin>>n;
    string love = "I love ";
    string hate = "I hate ";
    string that = "that ";
    string it = "it";
    string result;

    for(i=1; i<=n; i++){
        if(i%2!=0)
            result += hate;
        else
            result += love;

        if(i<n)
            result+= that;
    }
    result += it;

    cout<<result;
}
