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
    int i, j, k, d;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> k >> d;
    if (k > 1 && d == 0)
        cout << "No solution" << endl;
    else {
        string s = to_string(d);
        for (i = 0; i < k - 1; i++) {
            s += "0";
        }
    cout << s << endl;
    }
    return (0);
}