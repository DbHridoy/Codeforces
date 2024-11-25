#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,a,b,i,j,k,l;
    cin>>n>>c;
    long long t[n];
    cin>>t[0];
    a=1;
    for(i=1;i<n;i++){
        cin>>t[i];
        if(t[i]-t[i-1]>c && a>0){
            a=1;
        }
        else {
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}
