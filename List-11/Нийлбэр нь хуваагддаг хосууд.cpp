#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,k,d=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((v[i]+v[j])%k==0){
                d++;
            }
        }
    }
    cout<<d;
    
    
    return 0;
}