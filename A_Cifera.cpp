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
    int k,n;
    cin>>k>>n;
    while(n && n%k==0){
        // cout<<n<<endl;
        j++;
        n/=k;
    }
    // cout<<n<<endl;
    if(n==1){
        cout<<"YES"<<endl;
        cout<<j-1<<endl;
    }
    else cout<<"NO"<<endl;
    return (0);
}