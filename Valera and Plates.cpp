#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,l,c=0;
    cin>>n>>m>>k;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            if(m>0)
            {
                m--;
            }
            else
            {
                c++;
            }
        }
        else
        {
            if(k>0)
            {
                k--;
            }
            else if(m>0)
            {
                m--;
            }
            else
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
