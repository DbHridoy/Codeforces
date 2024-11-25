#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char, long long>
#define moi map<long long, long long>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;

void solve() {
    int n;
    moi m;
    cin >> n;
    int a[n], i, x;
    cin >> a[0];
    if (n == 1)
        cout << "YES" << endl;
    else {
        int j = 1;
        for (i = 1; i < n; i++) {
            cin >> x;
            if (a[j - 1] != x) {
                a[j] = x;
                j++;
            }
        }
        if (j == 1) {
            cout << "YES" << endl;
        } else {
            int c = 0;
            for (i = 0; i < j; i++) {
                if (i == 0 && a[i] < a[i + 1]) {
                    c++;
                } else if (i == j - 1 && a[i] < a[i - 1]) {
                    c++;
                } else if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
                    c++;
                }
                // cout << c << endl;
            }
            if (c == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main() {
    faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}