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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    int o, p, c;
    o = p = c = 0;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            o++;
            if (o == m) {
                o = 0;
                i += k-1;
                c++;
            }
        } else if (s[i] == '1') {
            o = 0;
        }
    }
    cout<<c<<endl;
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
