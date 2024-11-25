#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    double sum=0,d,b,c,e=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    b=sum/n;
    c=round(b);
//    cout<<"sum = "<<sum<<" b = "<<b<<" c = "<<c<<endl;
    if(c<5){
        d=4.5*n-sum;
        for(i=0;i<n;i++){
            e+=(5-a[i]);
            if(e>=d){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else cout<<0<<endl;
    return 0;
}
