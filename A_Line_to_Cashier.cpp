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
    int n;
    cin>>n;
    int k[n];
    for(i=0;i<n;i++){
        cin>>k[i];
    }
    int t=0,m,mnt=INT_MAX;
    for(i=0;i<n;i++){
        t=0;
        for(j=0;j<k[i];j++){
            cin>>m;
            t=t+m*5+15;
        }
        mnt=min(mnt,t);
    }
    cout<<mnt<<endl;
    return (0);
}