#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
 
    int Count=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        Count++;
    }
 
    cout<<Count<<endl;
    return 0;
}
