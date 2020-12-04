#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,*j,d=0;
    cin>>n>>m;
    long long a[n],b[m],c[max(n,m)];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<m;i++){
        cin>>b[i];
        j=find(a,a+n,b[i]);
        if(j!=a+n){
            c[d]=b[i];
            d++;
        }
    }
    sort(c,c+d);
    sort(b,b+m);
    if(d>0)cout<<c[0]<<endl;
    else cout<<min(a[0],b[0])*10+max(a[0],b[0])<<endl;
    return 0;
}
