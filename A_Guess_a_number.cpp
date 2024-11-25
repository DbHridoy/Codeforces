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
    int i, j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin >> n;
    string s[n], r[n];
    int a[n], u = 2000000000, l =-2000000000;
    for (i = 0; i < n; i++) {
        cin >> s[i] >> a[i] >> r[i];
        if (s[i] == "<") {
            if (r[i] == "Y") {
                u=min(u, a[i]-1);
            } else if (r[i] == "N") {
                l = max(l, a[i]);
            }
        } else if (s[i] == ">") {
            if (r[i] == "Y") {
                l = max(l, a[i]+1);
            } else if (r[i] == "N") {
                u=min(u, a[i]);
            }
        } else if (s[i] == "<=") {
            if (r[i] == "Y") {
                u=min(u, a[i]);
            } else if (r[i] == "N") {
                l = max(l, a[i] + 1);
            }
        } else if (s[i] == ">=") {
            if (r[i] == "Y") {
                l = max(l, a[i]);
            } else if (r[i] == "N") {
                u=min(u, a[i] - 1);
            }
        }
        // cout << l << " " << u << endl;
    }
    if (l <= u) {
        cout << l << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return (0);
}