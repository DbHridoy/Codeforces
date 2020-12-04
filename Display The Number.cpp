#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j,k;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        if(n%2)
        {
            if(n==3)
                s="7";
            else
            {
                j=(n-3)/2;
                s="7";
                for(i=0; i<j; i++)
                {
                    s+="1";
                }
            }
        }
        else{
            j=n/2;
            s="";
            for(i=0;i<j;i++){
                s+="1";
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
