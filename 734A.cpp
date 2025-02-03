#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i;
    cin>>n;
    string game;
    cin>> game;
    int anton = 0;
    int danik = 0;
    for(i=0; i<n; i++){
        if(game[i] == 'A')
            anton++;
        if(game[i] == 'D')
            danik++;
    }
    if(anton > danik)
        cout<<"Anton";
    else if( anton < danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
