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
    int i,j=0;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n,m,k,ans;
    cin>>n>>m>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(m<=k){
        cout<<0<<endl;
        return 0;
    }
    sort(a,a+n,greater<int>());
    ans=k;
    for(i=0;i<n;i++){
        j++;
        ans+=(a[i]-1);
        // cout<<j<<" "<<ans<<endl;
        if(ans>=m){
            cout<<j<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return (0);
}