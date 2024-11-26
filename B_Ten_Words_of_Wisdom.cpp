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
    int a[n], b[n];
    cin >> a[0] >> b[0];
    int mx = 0, ans = 0;
    if (a[0] <= 10) {
        mx = b[0];
        ans = 1;
    }
    for (int i = 1; i < n; i++) {
        cin >> a[i] >> b[i];
        if (b[i] > mx && a[i] <= 10) {
            mx = b[i];
            ans = i + 1;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    faster;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return (0);
}
