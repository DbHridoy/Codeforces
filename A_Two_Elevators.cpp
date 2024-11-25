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
    int a, b, c;
    cin >> a >> b >> c;
    int t1, t2;
    t1 = abs(a - 1);
    t2 = abs(b - c) + abs(c - 1);
    if (t1 < t2) {
        cout << 1 << endl;
    } else if (t1 > t2) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
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