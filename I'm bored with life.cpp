#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,k=1,i;
    cin>>a>>b;
    c=min(a,b);
    for(i=1;i<=c;i++){
        k*=i;
    }
    cout<<k<<endl;
    return 0;
}
