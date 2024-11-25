#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,s;
    j=l=s=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>k;
        if(k&1){
            a[j]=k;
            j++;
        }
        else{
            b[l]=k;
            l++;
        }
    }
    sort(a,a+j);
    sort(b,b+l);
    if(j==l)cout<<0<<endl;
    else if(j>l){
        for(i=0;i<j-l-1;i++){
            s+=a[i];
        }
        cout<<s<<endl;
    }
    else{
        for(i=0;i<l-j-1;i++){
            s+=b[i];
        }
        cout<<s<<endl;
    }
    return 0;
}
