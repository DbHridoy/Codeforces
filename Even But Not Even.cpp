#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i,j,k,l,a,b,c;
    string s,p;
    cin>>t;
    while(t--)
    {
        b=1;
        cin>>n>>s;
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        l=s.length();
        for(i=l-1; i>=0; i--)
        {
            a=s[i]-48;
            if(a&1)
                break;
            else
                s.erase(s.begin()+i);
        }
//        cout<<s<<endl;
        l=s.length();
        for(i=l-2; i>=0; i--)
        {
            a=s[i]-48;
            if(a&1)
            {
                p=s[i];
                p+=s[l-1];
                cout<<p<<endl;
                b=0;
                break;
            }
        }
        if(b)
            cout<<-1<<endl;
    }
    return 0;
}
