// #include <bits/stdc++.h>

// #define int long long
// #define endl '\n'
// #define vec vector<long long>
// #define moc map<char, long long>
// #define moi map<long long, long long>
// #define faster                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0)

// using namespace std;
// void print_arr(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int32_t main() {
//     faster;
//     int i, j = 1, k;
//     // freopen("../../input.txt", "r", stdin);
//     // freopen("../../output.txt", "w", stdout);
//     int n;
//     cin >> n;
//     int x[n], mn = INT_MAX;
//     for (i = 0; i < n; i++) {
//         cin >> x[i];
//     }
//     sort(x, x + n);

//     while (j) {
//         // print_arr(x, n);
//         int c = 0;
//         for (i = 1; i < n; i++) {
//             if (x[i] > x[i - 1]) {
//                 x[i] = x[i] - x[i - 1];
//             } else if (x[i] == x[i - 1]) {
//                 c++;
//             }
//         }
//         if (c == n - 1)
//             j = 0;
//         else {
//             sort(x, x + n);
//         }
//         // print_arr(x, n);
//     }
//     cout << accumulate(x, x + n, 0) << endl;
//     return (0);
// }

/*      Editorial       */

#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
int32_t main()
{
faster;
    int i,j,k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n;
    cin>>n;
    int x[n],gcd;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    gcd=x[0];
    for(i=1;i<n;i++){
        gcd=__gcd(gcd,x[i]);
    }
    cout<<gcd*n<<endl;
    return (0);
}