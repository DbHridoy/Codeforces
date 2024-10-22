#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j=0,k,l,r,n,m;
    string s;
    cin>>s;
    n=s.length();
    long int a[n],b[n];
    memset(b,0,sizeof(b));
    for(i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
        j+=a[i];
        b[i]=j;
    }
    b[i]=j;
//    for(i=0;i<n;i++){
//        cout<<a[i]<<" ";
//    }
//    cout<<endl;
//    for(i=0; i<n; i++)
//    {
//        cout<<b[i]<<" ";
//    }
//    cout<<    endl;
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        if(l==1)
            cout<<b[r-2]<<endl;
           else cout<<b[r-2]-b[l-2]<<endl;
    }
}
