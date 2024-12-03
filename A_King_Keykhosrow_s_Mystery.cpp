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

void solve()
{
 int a,b;
 cin>>a>>b;
 cout<<(a*b)/__gcd(a,b)<<endl;   
}

int32_t main()
{
    faster;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return (0);
}
