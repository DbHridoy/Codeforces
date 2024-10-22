#include <bits/stdc++.h>

#include <iostream>
#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char, long long>
#define moi map<long long, long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve() {
    int n;
    cin >> n;
    int c = INT_MAX;
    if (n % 15 == 0) {
        c = min(c, n / 15);
    } else if (n % 10 == 0) {
        c = min(c, n / 10);
    } else if (n % 6 == 0) {
        c = min(c, n / 6);
    } else if (n % 3 == 0) {
        c = min(c, n / 3);
    }
    int r = n % 15;
    int d = n / 15;
    if (r == 14) {
        d += 3;
    } else if (r == 5) {
        if (n > 5) {
            d++;
        } else {
            d += 3;
        }
    } else if (r == 8) {
        if (n > 15) {
            d += 2;
        } else {
            d += 3;
        }
    } else if (r == 10 || r == 6 || r == 3 || r == 1) {
        // cout << "HERE" << endl;
        d++;
    } else {
        d += 2;
    }
    c = min(c, d);
    cout << c << endl;
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
