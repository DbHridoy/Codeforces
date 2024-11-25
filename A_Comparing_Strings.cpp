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
    string s1, s2;
    cin >> s1 >> s2;
    i = s1.length();
    j = s2.length();
    if (i != j || i < 2)
        cout << "NO" << endl;
    else {
    int c = 0,d[i];
        for (i = 0; i < j; i++) {
            if (s1[i] != s2[i]) {
                d[c] = i;
                c++;
            }
        }
        if (c < 3) {
            swap(s1[d[0]], s1[d[1]]);
            if (s1 == s2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return (0);
}