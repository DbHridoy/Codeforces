#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,l;
    cin>>n>>l;
    long long int i,a[n],mx;
    if(n==1) {
        cin>>a[0];
        if(l-a[0]>a[0]-0)
            cout<<l-a[0]<<endl;
        else
            cout<<a[0]-0<<endl;
    }

    else {

        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        mx=a[1]-a[0];
        for(i=2; i<n; i++) {
            if(a[i]-a[i-1]>=mx) {
                mx=a[i]-a[i-1];
            }
        }
        double d=mx/2.0;
        if(a[0]-0>d)
            d=a[0]-0;
        if(l-a[n-1]>d)
            d=l-a[n-1];
        cout<<setprecision(10)<<fixed;
        cout<<d<<endl;
    }


}
