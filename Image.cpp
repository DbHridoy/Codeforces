#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    string s1, s2, s;
    cin >> s1 >> s2;
    s = s1 + s2;
    map<char, int> m;
    int l, i, f = 4,c=0;
    l = s.length();
    for (i = 0; i < l; i++) {
        m[s[i]]++;
    }
    for (i = 0; i < l; i++) {
        if (m[s[i]] == 4) {
            if (f > 0) f = 0;
        } else if (m[s[i]] == 3) {
            if (f > 1) f = 1;
        } else if (m[s[i]] == 2) {
            c++;
            if (c == 3) {
               f=1;
            }
            else if (f > 2) f = 2;
        } else {
            if (f > 3) f = 3;
        }
    }
    cout << f << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}