#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long t,d=0;
    cin>>t;
    vector<long long>a;
    for(int i=0;i<t;i++){
        long long n,m,s;
        cin>>n>>m>>s;
        int b;
        b=(m+s-1)%n;
        if(b==0){
            b=n;
        }
        a.push_back(b);
    }
    for(long long i=0;i<t;i++){
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}