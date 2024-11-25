// #include <bits/stdc++.h>

// #define int long long
// #define endl '\n'
// #define vec vector<long long>
// #define moc map<char,long long>
// #define moi map<long long,long long>
// #define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

// using namespace std;
// int32_t main()
// {
// faster;
//     int i,j,k,l;
//     // freopen("../../input.txt", "r", stdin);
//     // freopen("../../output.txt", "w", stdout);
//     int r1,r2,c1,c2,d1,d2;
//     cin>>r1>>r2>>c1>>c2>>d1>>d2;
//     for(i=1;i<10;i++){
//         for(j=1;j<10;j++){
//             for(k=1;k<10;k++){
//                 for(l=1;l<10;l++){
//                     if(i+j==r1&&i!=j){
//                         if(i+k==c1&&i!=k){
//                             if(j+l==c2&&j!=l){
//                                 if(k+l==r2&&l!=k){
//                                     if(i+l==d1&&i!=l){
//                                         if(j+k==d2&&j!=k){
//                                             cout<<i<<" "<<j<<endl;
//                                             cout<<k<<" "<<l<<endl;
//                                             return 0;
//                                         }
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     cout<<-1<<endl;
//     return (0);
// }

/*      Editorial       
        The given formula was wrong but I took the idea and solved it
*/

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
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x, a, b, c;
    x = (d1 + c1 - r2) / 2;
    a = r1 - x;
    b = c1 - x;
    c = r2 - b;
    if (a != b && b != c && a != c && c != x && a != x && b != x&&a > 0 && b > 0 && c > 0 && x > 0&&a<10&&b<10&&c<10&&x<10) {
            cout << x << " " << a << endl;
            cout << b << " " << c << endl;
    } else {
        cout << -1 << endl;
    }
    return (0);
}