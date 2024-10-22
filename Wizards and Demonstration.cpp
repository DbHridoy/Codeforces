#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,i,j,k,l;
    cin>>n>>x>>y;
    i=n*y;
    j=i/100;
    if(i%100!=0){
        j++;
    }
    if(j>x){
        cout<<j-x<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
