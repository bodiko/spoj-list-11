#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,m=1,d=0;
    cin>>n;
    int b[n];
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=0;
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            m++;
            if(d<m){
                d=m;
            }
        }
        else{
            m=1;
        }
    }
    cout<<n-d;
    
    
    
    
    
    return 0;
}