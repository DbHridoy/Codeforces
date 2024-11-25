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
    cin >> n;
    if (n == 2) {
        cout << 3 << " " << 1 << endl;
    } else if (n & 1) {
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
    } else {
        int total = 6 * n;
        cout << 4 << " " << 2 << " ";
        int r = total - 6, rn = n - 2;
        if (r % rn == 0) {
            for (int i = 0; i < rn; i++) {
                cout << r / rn << " ";
            }
            cout << endl;
        } else {
            int rm = r % rn;
            int ad = rm / 2;
            int al = r / rn;
            cout << al + ad << " " << al + ad << " ";
            for (int i = 0; i < rn - 2; i++) {
                cout << al << " ";
            }
            cout << endl;
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