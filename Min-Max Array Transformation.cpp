#include<bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    cout<<"hello"<<endl;
    int n;
    cin >> n;
    int a[n],b[n];
    int i;
    cin >> a[0];
    da[0] = 0;
    for (i = 1; i < n; i++) {
        cin >> a[i];
        da[i] = a[i] - a[i - 1];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b, b + n);
    int j = 0;
    for (i = 0; i < n; i++) {
        d[j] = b[i] - a[i];
        j++;
        d[j] = d[j - 1] + da[i];
        j++;
        d[j] = abs(d[j - 1] - da[i + 1]);
        j++;
    }
    for (i = 0; i < j; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    sort(d, d + j);
    for (i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    for (i = n - 1; i > 0; i--) {
        cout << d[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}