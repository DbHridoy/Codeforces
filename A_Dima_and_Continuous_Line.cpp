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
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=3)cout<<"no"<<endl;
    else{
    for(i=0;i<n-1;i++){
        for(j=i+2;j<n-1;j++){
            if((min(a[i],a[i+1])<min(a[j],a[j+1])&&max(a[i],a[i+1])<max(a[j],a[j+1])&&max(a[i],a[i+1])>min(a[j],a[j+1]))||(min(a[i],a[i+1])>min(a[j],a[j+1])&&max(a[i],a[i+1])>max(a[j],a[j+1])&&min(a[i],a[i+1])<max(a[j],a[j+1]))){
                cout<<"yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"no"<<endl;
    }


    return (0);
}