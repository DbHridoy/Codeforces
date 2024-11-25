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
    int i,j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int n,m,cp,cn;
    cp=cn=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==-1){
            cn++;
        }
        else{
            cp++;
        }
    }
    int l,r;
    for(i=0;i<m;i++){
        cin>>l>>r;
        j=r-l+1;
         if(j%2==0&&cn>=(j/2)&&cp>=(j/2))cout<<1<<endl;
         else cout<<0<<endl;
    }
    return (0);
}