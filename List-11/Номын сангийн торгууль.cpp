#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    vector<int>d(2),m(2),y(2);
    for(int i=0;i<2;i++){
        cin>>d[i]>>m[i]>>y[i];
    }
    if(y[0]>y[1]){
        cout<<10000;
    }
    else if(y[0]==y[1] && m[0]>m[1]){
        cout<<500*(m[0]-m[1]);
    }
    else if(y[0]==y[1] && m[0]==m[1] && d[0]>d[1]){
        cout<<15*(d[0]-d[1]);
    }
    else{
        cout<<0;
    }
    
    
    
    return 0;
}