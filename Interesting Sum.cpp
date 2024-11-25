#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    int n;
    cin >> n;
    int a[n], i, mx, mx1, mx2, mn, mn1, mn2, j, k, p = 0;
    cin >> a[0];
    mx = a[0];
    mn = a[0];
    for (i = 1; i < n; i++) {
        cin >> a[i];
        mn = min(a[i], mn);
        if (a[i] > mx) {
            mx = a[i];
            p = i;
        }
    }
    mx1 = a[0];
    mn1 = a[p + 1];
    for (i = 0; i < p; i++) {
        mx1 = max(a[i], mx1);
        mn1 = min(a[i], mn1);
    }
    j = mx1 - mn1;
    mx2 = a[p + 1];
    mn2 = a[p + 1];
    for (i = p + 1; i < n; i++) {
        mx2 = max(a[i], mx2);
        mn2 = min(a[i], mn2);
    }
    cout << "mx = " << mx << " mn = " << mn << endl;
    cout << "mx1 = " << mx1 << " mn1 = " << mn1 << endl;
    cout << "mx2 = " << mx2 << " mn2 = " << mn2 << endl;

    k = mx2 - mn2;
    cout << mx - mn + max(j, k) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}