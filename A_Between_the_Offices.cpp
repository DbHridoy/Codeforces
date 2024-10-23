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
    cin>>n;
    string s;
    cin>>s;
    int c=0,f=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='S'&&s[i+1]=='F')c++;
        else if(s[i]=='F'&&s[i+1]=='S')f++;
    }
    if(c>f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return (0);
}
