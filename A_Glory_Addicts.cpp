#include <bits/stdc++.h>

#define int long long
// #define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    cout<<1<<endl;
    int n;
    cin>>n;
    int a[n],b[n],i;
    vec v1,v2;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        if(a[i]==1){
            v1.push_back(b[i]);
        }
        else{
            v2.push_back(b[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int ans=0;
    // int ans=min(v1[0],v2[0])+max(v1[0],v2[0])*2;
    // int l1,l2;
    // l1=v1.size();
    // l2=v2.size();
    // int m;
    // m=min(l1,l2);
    for(i=0;i<n;i++){
        if(v1.size()!=0&&v2.size()!=0){
            
        }
        
    }
    ans+=accumulate(v1.begin(),v1.end(),0);
    ans+=accumulate(v2.begin(),v2.end(),0);
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