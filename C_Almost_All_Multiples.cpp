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
    int n, x, i, j;
    cin >> n >> x;
    int a[n];
    for (i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    if (n == x) {
        swap(a[0], a[n - 1]);
        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        if (n % x == 0) {
            a[x - 1] = n;
            a[0] = x;
            a[n - 1] = 1;
            i = 2;
            while (x < n-1) {
                while (n % (x * i) != 0 && x * i < n) {
                    /* code */
                    i++;
                }
                if (n % (x * i) == 0&&x*i<n) {
                    swap(a[x * i - 1], a[x - 1]);
                    x = x * i;
                }
                else if(x*i>=n){
                break;
                }
                // cout<<i<<" "<<x<<endl;
            }
            for (i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
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