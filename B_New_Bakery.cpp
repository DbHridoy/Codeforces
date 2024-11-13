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
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
        cout << n * a << endl;
    else {
        int k, j;
        if (b - a < n) {
            k = b - a;
            j = 0;
        } else {
            k = b-a;
            j = b - a - n;
        }
        cout << n * a + (k * (k + 1))/2 - (j * (j + 1)) / 2 << endl;
    }

    // Time limit exceed
    // int i=1;
    // int profit=0;
    // while(i<=n && b-i+1>a){
    //     profit=profit+b-i+1;
    //     i++;
    // }
    // i--;
    // profit=profit+(n-i)*a;
    // cout<<profit<<endl;
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
