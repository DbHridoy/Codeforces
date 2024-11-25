#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    int n,c;
    moi m;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++){
        if(m[a[i]]>1&&c<=m[a[i]]){ans+=c;i+=m[a[i]]-1;}
        else ans+=1;
    }
    cout<<ans<<endl;
}

int32_t main()
{
faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin>>t;
    while(t--){
        solve();
    }
    return (0);
}