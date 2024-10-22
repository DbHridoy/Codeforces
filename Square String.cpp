#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long i,j,k,f=0,l;
    string s;
    cin>>s;
    l=s.length();
    if(l&1)cout<<"No"<<endl;
    else{
    k=l/2;
    for(i=0,j=k;i<k;i++,j++){
        if(s[i]!=s[j]){
            f=1;
            break;
        }
    }
    if(f)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin>>t;
    while(t--){
        solve();
    }
    return (0);
}