#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,t,min=9999;
    cin>>n>>t;
    int a[n],b[t][2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<t;i++){
        min=9999;
        for(int j=b[i][0];j<=b[i][1];j++){
            if(min>a[j]){
                min=a[j];
            }
        }
        cout<<min<<endl;
    }
    
    
    
    
    return 0;
}