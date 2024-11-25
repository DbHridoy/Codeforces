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
    int i, j=0;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);

    int n, t;
    cin >> n >> t;

    int a[n], k, c, b;
    c = b = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        while (j < n) {
            ;
            if (c + a[j] <= t) {
                c += a[j];
                j++;
            } else {
                break;
            }
        }
        b = max(b, j - i);
        c -= a[i];
    }
    cout << b << endl;

    return (0);
}