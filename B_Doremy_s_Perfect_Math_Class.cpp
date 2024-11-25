#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n],i,gcd;
    cin>>a[0];
    gcd=a[0];
    for(i=1;i<n;i++){
        cin>>a[i];
        gcd=__gcd(gcd,a[i]);
    }
    sort(a,a+n);
    cout<<a[n-1]/gcd<<endl;
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