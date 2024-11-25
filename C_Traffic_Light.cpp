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
    int n, i, j = 0, k, l, ans = -1;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g') {
        cout << 0 << endl;
    } else {
        k = s.find('g');
        // cout<<k<<endl;
        for (i = n - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                j = i;
            }
            if (s[i] == c) {
                if (j == 0) {
                    l = n - i + k;
                } else {
                    l = j - i;
                }
                // cout<<ans<<" "<<l<<endl;
            ans = max(ans, l);
            }
        }
        cout << ans << endl;
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