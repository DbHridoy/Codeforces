#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        j+=a[i];
    }
    sort(a,a+n);
    cin>>m;
    long long q[m];
    for(i=0;i<m;i++){
        cin>>q[i];
        cout<<j-a[n-q[i]]<<endl;
    }
    return 0;
}
