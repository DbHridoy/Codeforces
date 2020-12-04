#include<bits/stdc++.h>
using namespace std;
long long digitrem(long long a){
    long long c=0;
while(a>0){
    a/=10;
c++;
}
//return c;
    if(c==1)return 1;
    else if(c==2)return 3;
    else if(c==3)return 6;
    else return 10;
}
int main()
{
    long long t,x,i,j;
    cin>>t;
    while(t--){
        cin>>x;
        i=digitrem(x);
//        cout<<i<<endl;
        j=(x%10)-1;
        cout<<j*10+i<<endl;
    }
    return 0;
}
