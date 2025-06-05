#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cases;
    cin>>t;
    for(cases=1; cases<=t; cases++){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int lose1, lose2, fin1, fin2;
        if(a>b){
            fin1=a;
            lose1=b;
        }
        if(a<b){
            fin1=b;
            lose1=a;
        }

        if(c>d){
            fin2=c;
            lose2=d;
        }
        if(c<d){
            fin2=d;
            lose2=c;
        }


        if(fin1>lose1 && fin1>lose2 && fin2>lose1 && fin2>lose2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
