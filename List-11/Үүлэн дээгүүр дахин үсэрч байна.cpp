#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,k,s=0,a[100],c=100;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    for(int i=1; i<=n; i+=k){
        if(a[i]==1){
           c-=2;
        }
        c--;
    }
    
    cout<<c;
    
    

    return 0;
}
