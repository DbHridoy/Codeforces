#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long i,j,k,l,d,c=0,n;
    cin>>n>>a>>b;
    for(i=0;i<n;i++){
        k=a[i]-48;
        l=b[i]-48;
        c+=min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    }
    cout<<c<<endl;
    return 0;
}
