#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long t;
    cin>>t;
    vector<string>a(t);
    for(int i=0;i<t;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(abs(z-y)==abs(z-x)){
            a[i]="Mouse C";
        }
        else{
            if(abs(z-y)<abs(z-x)){
                a[i]="Cat B";
            }
            else{
                a[i]="Cat A";
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<a[i]<<endl;
    }
    
    
    
    return 0;
}