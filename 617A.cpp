#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
 
    int i, sum=0;
    if(x==1 || x==2 || x==3 || x==4 || x==5)
        sum++;
    else{
    for(i=5; i>=1; i--){
        int result = x/i;
        int remainder = x%i;
        if(result != 0){
            sum+= result;
            if((remainder !=0) && (remainder <=5)){
                sum++;
            }
        }
        if((i*result)+remainder == x)
            break;
    }
    }
    cout<<sum;
}
