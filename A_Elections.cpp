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
    int a[3], c = 0;
    cin >> a[0];
    int l = a[0];
    for (int i = 1; i < 3; i++) {
        cin >> a[i];
        if (a[i] > l) {
            l = a[i];
        } else if (a[i] == l) {
            c = a[i];
        }
    }
    if (c == l) {
        l++;
        for (int i = 0; i < 3; i++) {
            cout << l - a[i] << " ";
        }
    } else {
        for (int i = 0; i < 3; i++) {
            if (l - a[i])
                cout << l - a[i] + 1 << " ";
            else {
                cout << 0 << " ";
            }
        }
    }
    cout << endl;
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