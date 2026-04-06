#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i, j, x = 0;
    cin >> n >> m;
    int a[n], b[m];

    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < m; i++) cin >> b[i];

    int g = a[0];
    for (i = 1; i < n; i++) {
        int t = a[i];
        while (t != 0) {
            int r = g % t;
            g = t;
            t = r;
        }
    }

    int l = b[0];
    for (i = 1; i < m; i++) {
        int t = b[i], r;
        int x1 = l, x2 = t;
        while (x2 != 0) {
            r = x1 % x2;
            x1 = x2;
            x2 = r;
        }
        l = l / x1 * t;
    }

    for (i = g; i <= l; i += g) {
        int ok = 1;
        for (j = 0; j < n; j++) if (i % a[j] != 0) ok = 0;
        for (j = 0; j < m; j++) if (b[j] % i != 0) ok = 0;
        if (ok) x++;
    }

    cout << x;
}
