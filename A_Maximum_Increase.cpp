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

    int n, b, c, d;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    c = 1;
    b = 1;
    for (i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            c++;
        } else {
            c = 1;
        }
        b = max(b, c);
        // cout<<c<<endl;
    }
    cout << b << endl;

    return (0);
}