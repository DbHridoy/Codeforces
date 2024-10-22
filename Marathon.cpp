#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a[4],i,j=0;
    cin>>a[0];
    for(i=1;i<4;i++){
        cin>>a[i];
        if(a[i]>a[0])
        j++;
    }
    cout<<j<<endl;
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