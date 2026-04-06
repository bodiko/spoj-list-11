#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), a(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        c[i] = p[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+1==p[j]) {
                int b = j + 1;
                for (int l = 0; l < n; l++) {
                    if (b == c[l]) {
                        a[i] = l + 1;
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++) {
        cout<<a[i]<<endl;
    }

    return 0;
}
