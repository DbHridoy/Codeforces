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
int count_inverse(string s, int n) {
    int c = 0, i;
    moc m;
    for (i = 0; i < n; i++) {
        if (s[i] == '1') {
            m['1']++;
        } else {
            c = c + m['1'];
        }
    }
    return c;
}
void solve() {
    int n;
    cin >> n;
    cin.ignore();
    string x, s = "";
    getline(cin, x);
    // cout << "s1 = " << x << endl;
    int i = 0, j = 0;
    // s[0]=x[0];
    while (x[i]) {
        if (x[i] != ' ') s += x[i];
        i++;
    }
    // cout << "s2 = " << s << endl;
    // cout<<s.size()<<endl;
    int a = count_inverse(s, n), b, c;
    b=c=0;
    int l1, f0;
    l1 = f0 = 0;
    bool f = true, l;
    // cout<<f<<endl;
    for (i = 0; i < n; i++) {
        if (s[i] == '0' && f) {
            // cout<<"hel"<<endl;
            f0 = i;
            f = false;
        } else if (s[i] == '1') {
            l1 = i;
            l = true;
        }
    }
    // cout<<f0<<" "<<l1<<endl;
    if (!f) {
        s[f0] = '1';
        b = count_inverse(s, n);
        // cout<<s<<" "<<b<<endl;
        s[f0] = '0';
    }
    if (l) {
        s[l1] = '0';
        c = count_inverse(s, n);
        // cout<<s<<" "<<c<<endl;
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    cout << max(a, max(b, c)) << endl;
}

int32_t main() {
    faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
    return (0);
}