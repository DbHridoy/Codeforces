#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,s;
    cin>>t;
    while(t--){
        cin>>n;
        --n/=2;
        cout<<8*(n*(n+1)*(2*n+1))/6<<endl;
    }
    return 0;
}
