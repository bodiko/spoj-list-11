#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long a,m,n,maxi;
    cin>>a>>m>>n;
    vector<int>k(m), f(n), v;
    for(int i=0;i<m;i++){
        cin>>k[i];
    }
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((k[i]+f[j])<=a){
                v.push_back((k[i]+f[j]));
            }
        }
    }
    if(v.size()==0){
        cout<<"-1";
    }
    else{
        sort(v.begin(), v.end(), greater<long long>());
        cout<<v[0];
    }
    
    
    return 0;
}