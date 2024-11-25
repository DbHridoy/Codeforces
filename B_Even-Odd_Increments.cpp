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
    int n, i, j, k, q;
    cin >> n >> q;
    int a[n];
    int o,e;
    o=e=0;
    int sum=0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]&1){
            o++;
        }
        else{
            e++;
        }
        sum+=a[i];
    }
    int c, x;
    for (i = 0; i < q; i++) {
        cin >> c >> x;
        if (c == 0) {
            sum=sum+e*x;
            if(x&1){
                o+=e;
                e=0;
            }
        } else {
            sum=sum+o*x;
            if(x&1){
                e+=o;
                o=0;
            }
        }
        // sum=accumulate(a,a+n,0);
        cout << sum << endl;
        // cout<<accumulate(a,a+n,0)<<endl;
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