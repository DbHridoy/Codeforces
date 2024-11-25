#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j;
    cin>>n>>k;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(k>n)cout<<-1<<endl;
    else cout<<a[i-k]<<" "<<a[i-k]<<endl;
    return 0;
}
