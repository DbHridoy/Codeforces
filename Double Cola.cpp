#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,i=0,a,b=0,c,d,e;
    cin>>n;
    string s[5]= {"Howard","Sheldon","Leonard","Penny","Rajesh"};
    if(n<=5)
        cout<<s[n%5]<<endl;
    else {
        while(1) {
            d=pow(2,i);
            a=5*d;
            b+=a;
            if(b>n) {
                break;
            }
            i++;
        }
//        cout<<"b = "<<b<<" a = "<<a<<endl;
        b-=a;
        c=n-b;
//        cout<<"b = "<<b<<" c = "<<c<<" c/d = "<<c/d<<endl;
        e=c/d;
        if(e==4)e=-1;
        cout<<s[e+1]<<endl;
    }

    return 0;
}
