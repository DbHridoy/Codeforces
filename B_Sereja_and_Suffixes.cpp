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

    int n, m, b, c;
    cin >> n >> m;
    int a[n];
    set<int> s;
    moi mp;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(i=n-1;i>=0;i--){
        s.insert(a[i]);
        mp[i] = s.size();
    }
    for (i = 0; i < m; i++) {
        cin >> b;
        cout<<mp[b-1]<<endl;
    }

    return (0);
}