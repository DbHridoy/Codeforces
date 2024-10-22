#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,a,b,c,d;
    cin>>n>>k;
    long long p[n],s[k];
    a=b=c=d=0;
    for(i=0; i<n; i++)
    {
        cin>>p[i];
        if(p[i]&1)
            a++;
        else
            b++;
    }
    for(i=0; i<k; i++)
    {
        cin>>s[i];
        if(s[i]&1)
            c++;
        else
            d++;
    }
    cout<<min(a,d)+min(b,c)<<endl;
    return 0;
}
