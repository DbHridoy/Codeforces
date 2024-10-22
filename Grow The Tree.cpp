#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,x,y,l;
    x=y=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    k=n/2;
    for(i=0;i<k;i++){
        y+=a[i];
    }
    for(i=k;i<n;i++){
        x+=a[i];
    }
    cout<<x*x+y*y<<endl;
    return 0;
}
