#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i, element;
    vector<int> v;
    for(i=0;i<n;i++) {
        cin>>element;
        v.push_back(element);
    }

    int sereja=0, dima=0;
    int temp;
    bool serejaturn = true;
    while (!v.empty()) {
        if (v.front()>=v.back()) {
            temp=v.front();
            v.erase(v.begin());
        }
        else{
            temp=v.back();
            v.pop_back();
        }
        if (serejaturn) {
            sereja+=temp;
        }
        else {
            dima+=temp;
        }
        serejaturn=!serejaturn;
    }

    cout<<sereja<<" "<<dima;

}
