#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,a,b,c,d,e,f;
    cin>>s>>a>>b>>c>>d;
    e=s*a+2*c;
    f=s*b+2*d;
    if(e<f)cout<<"First"<<endl;
    else if(f<e)cout<<"Second"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}
