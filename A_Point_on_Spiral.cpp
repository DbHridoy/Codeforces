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
    int i = 0, j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0 ) {
        i = 0;
    } else if (x <= 0) {
        if (y > 0)
            i = max(abs(x), abs(y)) * 2*2-2;
        else
            i = max(abs(x), abs(y)) * 2 * 2 - 1;
    } else if (x > 0) {
        if (y > 0 && y != x)
            i = max(abs(x), abs(y)) * 2*2-2;
        else
            i = (max(abs(x), abs(y)) - 1) * 2 * 2 + 1;
    }
    cout << i << endl;
    return (0);
}