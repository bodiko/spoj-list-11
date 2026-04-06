#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int s,maxi=0;
    string A;
    vector<int>v(26);
    for(int i=0;i<26;i++){
        cin>>v[i];
    }
    cin>>A;
    for(int i=0;i<A.size();i++){
        int s=A[i]-'a';
        if(maxi<v[s]){
            maxi=v[s];
        }
    }
    cout<<maxi*A.size();

    
    
    return 0;
}