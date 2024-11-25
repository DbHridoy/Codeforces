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
    int i, j, k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    string s[5];
    char ans;
    int l[5],gc=0, c = 0, d = 0;
    for (i = 0; i < 4; i++) {
        cin >> s[i];
        l[i] = s[i].length() - 2;
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (l[i] >= 2 * l[j]) {
                c++;
            } else if (l[i] <= l[j] / 2) {
                d++;
            }
        }
        // cout<<c<<" "<<d<<endl;
        if (c == 3) {
            gc++;
            ans = s[i][0];
        } else if (d == 3) {
            gc++;
            ans = s[i][0];
        }
        c = 0;
        d = 0;
    }
    if (gc == 1) {
        cout << ans << endl;
    } else
        cout << "C" << endl;
    return (0);
}