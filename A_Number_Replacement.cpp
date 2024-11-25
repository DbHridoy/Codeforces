#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    int n,i,j;
    string s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    map<int,char> mc;
    moi mi;
    for(i=0;i<n;i++){
        if(mi[a[i]]==0){
            mc[a[i]]=s[i];
        }
        mi[a[i]]++;
    }
    string sf="";
    for(i=0;i<n;i++){
        sf=sf+mc[a[i]];
    }
    if(sf==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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