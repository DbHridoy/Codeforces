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
    int i, j, k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    set<int> s1, s2, s3;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        // if(a[i]<0){
        //     s1.insert(a[i]);
        // }
        // else if(a[i]>0){
        //     s2.insert(a[i]);
        // }
        // else{
        //     s3.insert(a[i]);
        // }
    }
    sort(a, a + n);
    s1.insert(a[0]);
    if (a[n - 1] > 0) {
        s2.insert(a[n - 1]);
        for (i = 1; i < n - 1; i++) {
            s3.insert(a[i]);
        }
    } else if (a[n - 1] == 0) {
        s2.insert(a[1]);
        s2.insert(a[2]);
        for (i = 3; i < n; i++) {
            s3.insert(a[i]);
        }
    }
    cout << s1.size() << " ";
    for (auto it : s1) cout << it << " ";
    cout << endl;
    cout << s2.size() << " ";
    for (auto it : s2) cout << it << " ";
    cout << endl;
    cout << s3.size() << " ";
    for (auto it : s3) cout << it << " ";
    cout << endl;

    return (0);
}