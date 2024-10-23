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
    int n, p;
    cin >> n >> p;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        v.push_back({a[i], b[i]});
    }
    stable_sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        // if (a.second == b.second) {
        //     return a.first > b.first;
        // } else
        return a.second < b.second;
    });
    // for (auto i : v) cout << i.first << " " << i.second << endl;
    int c = 1, cost = p;
    for (int i = 0; c < n; i++) {
        // cout<<"vector = "<<v[i].first<<" "<<v[i].second<<endl;
        if (v[i].second <= p) {
            cost = cost + (v[i].second * min(v[i].first, (n - c)));
            c = c + min(v[i].first, (n - c));
        } else {
            cost = cost + (n - c) * p;
            break;
        }
        // cout <<"count : "<< c<<" "<<cost << endl;
    }
    cout << min(p * n, cost) << endl;
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
