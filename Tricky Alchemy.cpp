#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,x,y,z,i,j,k,l;
    cin>>a>>b>>x>>y>>z;
    i=x*2+y;
    j=z*3+y;
    (i>a)?c+=i-a:c;
    (j>b)?c+=j-b:c;
    cout<<c<<endl;
    return 0;
}
