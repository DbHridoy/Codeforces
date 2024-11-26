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
    string s;
    char ans;
    int a, b, c;
    a = b = c = 0;
    for (int i = 0; i < 3; i++) {
        cin >> s;
        for (int i = 0; i < 3; i++) {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'B')
                b++;
            else
                c++;
        }
    }
    if (a == 2)
        ans = 'A';
    else if (b == 2)
        ans = 'B';
    else
        ans = 'C';
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
