#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    long long n, m;
    cin >> n >> m;
    long long a[n], i, j, k, l, x;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = 0; j < m; j++) {
        // for(i=0;i<n;i++)cout<<a[i]<<" ";
        // cout<<endl;
        cin >> i >> x;
        a[i - 1] = x;
        // for (i = 0; i < n; i++) cout << a[i] << " ";
        // cout << endl;
        map<long long, long long> mp, mpp;
        long long total = 1, tasm = 0;
        mp[0] = 1;
        for (i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                mp[i] = mp[i - 1] + 1;
            } else {
                mp[i] = mp[i - 1];
            }
            total += mp[i];
            mpp[i] = total - mp[i];
            // cout<<"mp[i] = "<<mp[i]<<" i = "<<i<<endl;
            // cout << "total = " << total << " i = " <<i<< endl;
            // cout<<"mpp = "<<mpp[i]<<endl;
        }
        for (i = 0; i < n; i++) {
            // cout << "tasm = " << tasm << " i = " <<i<< endl;
            // cout << "total = " << total << endl;
            // cout << "mpp[i] = " << mpp[i] << endl;
            // cout << "mp[i] = " << mp[i] << endl;
            if (mp[i] == 1) {
                tasm += total - mpp[i];
            } else {
                tasm = tasm + total - mpp[i] - (n - i) * (mp[i] - 1);
                // }cout<<"tasm = "<<tasm<<endl;
                // cout << endl;
            }
        }
        cout << tasm << endl;
    }
    return (0);
}
