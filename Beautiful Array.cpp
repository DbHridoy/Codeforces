#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n, k, b, s, i, j, c = 0, l, r;
    cin >> n >> k >> b >> s;
    long long a[n];
    // memset(a,0,n);
    l = k * b;
    if (l > s)
        cout << -1 << endl;
    else {
        r = s - l;
        if (n * (k - 1) < r)
            cout << -1 << endl;
        else {
            // cout<<"r = "<<r<<endl;
            // j=r/(n-1);
            c = l;
            a[0] = l;
            for (i = 1; i < n; i++) {
                if (c + k - 1 < s) {
                    a[i] = k - 1;
                    c += a[i];
                    // cout << "c = " << c << endl;
                } else {
                    a[i] = 0;
                }
            }
            if (c < s)
                a[0] = l+s - c;
            for (i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}