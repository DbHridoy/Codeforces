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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    set<int> sr, sc;
    set<int>::iterator ir, ic;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                sr.insert(i);
                sc.insert(j);
            }
        }
    }
    ir = sr.find(0);
    ic = sc.find(0);
    if (ir != sr.end() || ic != sc.end())
        cout << 2 << endl;
    else {
        ir = sr.find(n - 1);
        ic = sc.find(m - 1);
        if (ir != sr.end() || ic != sc.end())
            cout << 2 << endl;
        else
            cout << 4 << endl;
    }

    return (0);
}