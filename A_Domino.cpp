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
    int i, j=0, k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin >> n;
    int u, l;
    u = l = 0;
    int x[n], y[n];
    moi m;
    for (i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        u += x[i];
        l += y[i];
        if ((x[i] & 1 && y[i] %2==0)||(y[i]&1 && x[i]%2==0)) m[i]++;
    }
    if (u & 1 || l & 1) {
        for (i = 0; i < n; i++) {
            if (m[i] > 0) {
                u = u - x[i] + y[i];
                l = l - y[i] + x[i];
                j++;
            }
            // cout<<u<<" "<<l<<endl;
            if (u % 2 == 0 && l % 2 == 0) {
                break;
            }
        }
        if (u % 2 == 0 && l % 2 == 0) {
            cout << j << endl;
        } else
            cout << -1 << endl;
    } else {
        cout << 0 << endl;
    }
    return (0);
}