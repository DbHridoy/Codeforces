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
    moi m;
    int n;
    cin >> n;
    int a[n], c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
        if (m[a[i]] > 1) c = 1;
    }
    if (c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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