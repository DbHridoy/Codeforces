#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,l,r,x,y;
    cin>>a;
    while(a--){
        cin>>l>>r;
        if(l*2<=r){
            cout<<l<<" "<<l*2<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}
