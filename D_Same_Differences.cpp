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
    int n;
    cin>>n;
    int a[n];
    map<int ,int>m;
    int d,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        d=a[i]-i;
        m[d]++;
        if(m[d]==2){
            c++;
            m[d]=0;
        }
    }
    cout<<c<<endl;
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
