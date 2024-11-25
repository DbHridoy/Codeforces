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
    int n;
    cin >> n;
    int d[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    a[0] = d[0];
    int c = 0;
    for (int i = 1; i < n; i++) {
        // cout<<a[i-1]<<" "<<d[i]<<endl;
        if(d[i]==0){
            a[i]=a[i-1]+d[i];
        }
        else if(a[i-1]-d[i]>=0){
            c++;
            break;
        }
        else{
            a[i]=a[i-1]+d[i];
        }
    }
    if (c) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}