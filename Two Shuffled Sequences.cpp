#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l;
    map<long long,long long >m;
    cin>>n;
    long long a[n],b[n];
    bool np=false;
    j=l=0;
    for(i=0; i<n; i++)
    {
        cin>>k;
        m[k]++;
        if(m[k]==1)
        {
            a[j]=k;
            j++;
        }
        else if(m[k]==2)
        {
            b[l]=k;
            l++;
        }
        else if(m[k]>2)
        {
            np=true;
        }
    }
    if(np)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        sort(a,a+j);
        sort(b,b+l);
        cout<<j<<endl;
        for(i=0; i<j; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<l<<endl;
        for(i=l-1; i>=0; i--)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
