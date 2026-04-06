#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long n,s=5,l=0,t=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        l=s/2;
        t=t+l;
        s=l*3;
    }
    cout<<t;

    
    
    return 0;
}
