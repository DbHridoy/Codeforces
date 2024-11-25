#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long a[n],i,j,k,o,e,sum;
        sum=o=e=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
            if(a[i]&1)
                o++;
            else
                e++;
        }
        if(sum&1)
            cout<<"YES"<<endl;

        else if(e>0&&o>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
