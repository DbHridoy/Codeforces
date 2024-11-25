#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a=(k-1)/(n-1);
        cout<<k+a<<endl;
    }
    return 0;
}
