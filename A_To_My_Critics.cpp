#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}