#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;

    for(int row=1; row<=n; row++) {
        if(row%2!=0){
            for(int column=1; column<=m; column++){
                cout<<"#";
            }
        }
            else{
            if((row/2)%2==1){
                for(int column=1; column<m; column++){
                    cout<<".";
                }
                cout<<"#";
            }
            else{
                cout<<"#";
                for(int column=2; column<=m; column++){
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
