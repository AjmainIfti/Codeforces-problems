#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long i, Count=0;
    for(i=0; i<n; i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron")
            Count+=4;
        if(s=="Cube")
            Count+=6;
        if(s=="Octahedron")
            Count+=8;
        if(s=="Dodecahedron")
            Count+=12;
        if(s=="Icosahedron")
            Count+=20;
    }
    cout<<Count;
}
