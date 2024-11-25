#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,s,p,i,j,c;
    cin>>k>>n>>s>>p;
    c=n/s;
    if(n%s!=0){
        c++;
    }
    i=k*c;
    j=i/p;
//    cout<<"c = "<<c<<"i = "<<i<<"j = "<<j<<endl;
    if(i%p!=0){
        j++;
    }
    cout<<j<<endl;
    return 0;
}
