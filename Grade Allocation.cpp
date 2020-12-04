#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n],b,s=0;
        cin>>a[0];
        b=m-a[0];
        for(i=1; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s>=b)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<a[0]+s<<endl;
        }
    }
    return 0;
}
