#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,p,a,b,c;
    cin>>n>>p;
    a=p/2;
    if(n%2==0){
        if(p%2==0){
            b=(n-p)/2;
        }
        else{
            c=n-p;
            b=(c+1)/2;
        }
    }
    else{
        b=(n-p)/2;
    }
    
    if(a>b){
        cout<<b;
    }
    else{
        cout<<a;
    }
    

    return 0;
}
