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
    string c;
    cin >> c;
    string s = c;
    if (s == "abc") {
        cout << "YES" << endl;
    } else {
        swap(s[0], s[2]);
        if (s == "abc") {
            cout << "YES" << endl;
        } else {
            s = c;
            swap(s[0], s[1]) ;
            if (s == "abc") {
                cout << "YES" << endl;
            }
            else {
                s = c;
                swap(s[1], s[2]) ;
                if (s == "abc") {
                    cout << "YES" << endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
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
