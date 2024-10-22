// My solution

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
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin >> n;
    int a, b;
    int bl = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) {
            b = a / 2;
        } else {
            if (a > 0) {
                if (bl == 0) {
                    b = a / 2;
                    bl--;
                } else {
                    b = a / 2 + 1;
                    bl++;
                }
            } else {
                if (bl == 0) {
                    b = a / 2 - 1;
                    bl--;
                } else {
                    b = a / 2;
                    bl++;
                }
            }
        }
        cout << b << endl;
    }
    return (0);
}

// Other's solution

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int n;
//   cin >> n;
//   int flag = 1;
//   for (int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     if (x % 2 == 0) {
//       cout << x / 2 << '\n';
//     } else {
//       cout << (x + flag) / 2 << '\n';
//       flag *= -1;
//     }
//   }
//   return 0;
// }
