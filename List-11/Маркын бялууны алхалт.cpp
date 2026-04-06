#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long n,s;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    s=a[0];
    for(int i=1;i<n;i++){
        long long p=1;
        for(int j=0;j<i;j++){
            p=p*2;
        }
        s=s+p*a[i];
    }
    cout<<s;
    
    
    
    return 0;
}