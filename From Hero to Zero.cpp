#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n,k,t,i,j;
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>n>>k;
        while(n>1)
        {
            if(n%k)
            {
                a+=(n%k);
                n-=(n%k);
            }
            else
            {
                n/=k;
                a++;
            }
//            cout<<"n = "<<n<<endl;
        }
        if(n==1)
            cout<<a+1<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
