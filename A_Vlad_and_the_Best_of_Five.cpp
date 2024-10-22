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
    string s;
    cin>>s;
    int a,b;
    a=b=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A')a++;
        else b++;
    }
    if(a>b)cout<<"A"<<endl;
    else cout<<"B"<<endl;
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
