#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long n,d,maxi;
    cin>>n;
    vector<long long>v(n), b(6);
    for(int i=0;i<n;i++){
        cin>>v[i];
        b[v[i]]++;
    }
    maxi=b[1];
    for(int i=2;i<=5;i++){
        if(maxi<b[i]){
            maxi=b[i];
            d=i;
        }
    }
    cout<<d;
    
    
    return 0;
}