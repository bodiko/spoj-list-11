#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long a,b,k,d=0,e,f=0,g=0,c;
    cin>>a>>b>>k;
    c=a;
    for(long long i=a;i<=b;i++){
        long long t=i;
        d=0;
        while(t>0){
            d=d*10+(t%10);
            t=t/10;
        }
        if(abs(i-d)%k==0){
            g++;
        }
    }
    cout<<g;
    
    
    return 0;
}