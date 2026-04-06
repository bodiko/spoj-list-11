#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int d,a[1000],m,n,l=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    for(int i=1;i<=n-m+1;i++){
        int s=0;
        for(int j=i;j<=m+i-1;j++){
            s=s+a[j];
        }
        if(s==d){
            l++;
        }
    }
    cout<<l;
    
    
    
    return 0;
}