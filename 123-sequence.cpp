#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,i,j,k;
    a=b=c=0;
    cin>>n;
    long long d[n];
    for(i=0;i<n;i++){
        cin>>d[i];
        if(d[i]==1){
            a++;
        }
        else if(d[i]==2){
            b++;
        }
        else{
            c++;
        }
    }
//    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<min(a+b,min(a+c,b+c))<<endl;
    return 0;
}
