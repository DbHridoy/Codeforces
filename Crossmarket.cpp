#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin>>n>>m;
    if(n==1&&m==1)cout<<0<<endl;
    // else if(n==1)cout<<m<<endl;
    // else if(m==1)cout<<n-1<<endl;
    else
    cout<<min(2*n+m-2,2*m+n-2)<<endl;
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