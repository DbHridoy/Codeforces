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
    int a;
    string s;
    cin >> a >> s;
    int i, ans, j;
    ans = s[0] - 'a' + 1;
    for (i = 1; i < a; i++) {
        j = s[i] - 'a' + 1;
        ans = max(ans, j);
    }
    cout << ans << endl;
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