#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,k,l,a,t,b,r=0;
    cin>>n>>m;
    string s[n],p[m];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>p[i];
    }
    l=(m*n)/__gcd(n,m);
//    cout<<"l = "<<l<<endl;
    string q[1000];
    for(i=0,k=0; i<l/n; i++)
    {
        for(j=0; j<n; j++,k++)
        {
//            cout<<"j = "<<j<<" k = "<<k<<endl;
            q[r]=s[j]+p[k];
            if(k==m-1)
            {
                k=-1;
            }
//            cout<<"q["<<r<<"] = "<<q[r]<<endl;
            r++;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=a%l;
//        cout<<"b = "<<b<<endl;
        if(b==0)
        {
            cout<<q[l-1]<<endl;
        }
        else
        {
            cout<<q[b-1]<<endl;
        }
    }

    return 0;
}
