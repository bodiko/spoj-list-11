#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long n,k,a,s=0,b;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==k){
            s=s;
        }
        else{
            s=s+v[i];
        }
    }
    b=s/2;
    cin>>a;
    if(b==a){
        cout<<"Bon Appetit";
    }
    else{
        cout<<a-b;
    }
    
    
    
    return 0;
}