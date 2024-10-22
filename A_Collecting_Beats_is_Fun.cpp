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
int32_t main() {
    faster;
    int i, j, k, f = 0;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> k;
    char ch;
    moc m;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cin >> ch;
            m[ch]++;
            if (m[ch] > 2*k && ch!= '.') {
                f++;
            }
        }
    }
    if (f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return (0);
}