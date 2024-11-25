#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l=0,a[200],s=0,m=-1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        if(k==1){
            a[i]=-1;
            l++;
        }
        else{
            a[i]=1;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
                s=0;
            s=accumulate(a+i,a+j,s);
//            cout<<"i = "<<i<<"j = "<<j<<"s = "<<s<<endl;
            if(s>=m){
                m=s;
            }
        }
    }
    cout<<m+l<<endl;
    return 0;
}
