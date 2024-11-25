#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n,k,i,j;
    cin>>a;
    while(a--){
        cin>>n>>k;
        if(((n&1 && k&1)||(n%2==0&&k%2==0))&&(k*k)<=n){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
