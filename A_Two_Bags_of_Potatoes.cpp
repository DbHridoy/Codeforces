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
    int i,j,k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    int y,n;
    cin>>y>>k>>n;
    set<int>s;
    i=1;
    while(1){
        j=i*k;
        if(j>y&&j<=n){
            s.insert(j-y);
        }
        else if(j>n){
            break;
        }
        i++;
    }
    if(s.size()==0){
        cout<<-1<<endl;
    }
    else{
        for(auto it:s)cout<<it<<" ";
        cout<<endl;
    }
    return (0);
}