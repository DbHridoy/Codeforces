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
    string s;
    cin >> s;
    int c = 0, begin, end;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B' && c == 0) {
            begin = i;
            c++;
        }
        if (s[i] == 'B' && c > 0) {
            end = i;
        }
    }
    cout << end - begin + 1 << endl;
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
