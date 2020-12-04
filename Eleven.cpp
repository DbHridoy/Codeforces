#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i,j,k,f1,f2;
    cin>>n;
    f1=f2=1;
    cout<<"O";
    for(i=2;i<=n;i++){
        if(i==f1+f2){
            cout<<"O";
            f1=f2;
            f2=i;
        }
        else {
            cout<<"o";
        }
    }
    cout<<endl;
    return 0;
}
