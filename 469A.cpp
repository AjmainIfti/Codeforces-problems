#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>lx;
    int i, element;
    int p;
    cin>>p;
    for(i=0; i<p; i++){
        cin>>element;
        lx.push_back(element);
    }
    list<int>ly;
    int q;
    cin>>q;
    for(i=0; i<q; i++){
        cin>>element;
        ly.push_back(element);
    }

    lx.merge(ly);
    lx.sort();
    lx.unique();
    if(lx.size() == n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
