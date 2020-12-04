#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,k,l,a,b,c;

    cin>>n>>m;
    if(n<m)
    {
        cout<<-1<<endl;
    }
    else
    {
        i=n/2;
        if(n%2!=0)
            i++;
            j=i%m;
        if(j==0)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<i+m-j<<endl;
        }
    }
    return 0;
}
