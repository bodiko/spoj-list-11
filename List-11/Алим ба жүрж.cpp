#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;

    int appleCount=0, orangeCount=0;
    vector<int>apples(m), oranges(n);

    for(int i=0;i<m;i++) {
        cin>>apples[i];
        if (a+apples[i]>=s && a+apples[i]<= t) {
            appleCount++;
        }
    }

    for(int i=0;i<n;i++) {
        cin>>oranges[i];
        if (b+oranges[i]>=s && b+oranges[i]<=t) {
            orangeCount++;
        }
    }

    cout<<appleCount<< endl;
    cout<<orangeCount<<endl;

    return 0;
}
