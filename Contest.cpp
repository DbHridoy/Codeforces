#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=max((3*a)/10,a-(a/250)*c);
    f=max((3*b)/10,b-(b/250)*d);
//    cout<<e<<" " <<f<<endl;
    if(e>f){
        cout<<"Misha"<<endl;
    }
    else if(f>e){
        cout<<"Vasya"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }
    return 0;
}
