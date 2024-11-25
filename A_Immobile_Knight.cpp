#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    int m,n;
    cin>>n>>m;
    if(n==1||m==1){
        cout<<n<<" "<<m<<endl;
    }
    else if(n<4||m<4){
        cout<<2<<" "<<2<<endl;
    }
    else{
        cout<<n<<" "<<m<<endl;
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