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
    string s;
    cin >> s;
    // cout<<s<<endl;
    string h = "", m = "", t = "", u = "";
    h = h + s[0] + s[1];
    m = m + s[3] + s[4];
    // cout<<h<<endl;
    t = h;
    reverse(t.begin(), t.end());
    // cout<<t<<" "<<m<<endl;
    if (t > m) {
        j = stoi(t);
        if (j < 60) {
            cout << h << ":" << t << endl;
        } else {
            goto hur;
        }
    } else {
    hur:
        j = stoi(h);
        j++;
        while (1) {
            if (j >= 24) {
                j -= 24;
            }
            t = to_string(j);
            if (t.length() == 1) {
                t = "0" + t;
            }
            u = t;
            reverse(t.begin(), t.end());
            i = stoi(t);
            // cout<<i<<" "<<j<<endl;
            if (j < 24 && i < 60) {
                cout << u << ":" << t << endl;
                break;
            } else {
                j++;
            }
        }
    }
    return (0);
}