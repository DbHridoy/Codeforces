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
    int n, q;
    cin >> n >> q;
    int a[n], sum[n] = {0};
    // sum[n]={0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i != 0)
            sum[i] = sum[i - 1] + a[i];
        else
            sum[i] = a[i];
        // cout<<sum[i]<<endl;
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int check;
        if (l > 1)
            check = sum[n - 1] - sum[r - 1] + sum[l - 2];
        else
            check = sum[n - 1] - sum[r - 1];

        int fc = (r - l + 1) * k + check;
        if (fc & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // cout<<check<<endl;
    }
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
