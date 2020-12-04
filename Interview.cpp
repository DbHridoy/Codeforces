#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,r,o,m=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    o=b[0];
    m=a[0];
    for(i=0;i<n;i++){
//            cout<<"a["<<i<<"] = "<<a[i]<<" b["<<i<<"] = "<<b[i]<<endl;
           m=m|a[i];
           o=o|b[i];
//           cout<<"m = "<<m<<" o = "<<o<<" i = "<<i<<endl;
    }
    cout<<o+m<<endl;
    return 0;
}
