#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,a,b,c,d,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if((a==c&&b==d)||(a==d&&b==c))
        {
            k=min(a,b)+min(c,d);
            if(k==max(a,b))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(a==c)
        {
            k=b+d;
            if(k==c)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(a==d)
        {
            k=b+c;
            if(k==d)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(b==c)
        {
            k=a+d;
            if(k==b)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(b==d)
        {
            k=a+c;
            if(k==b)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}
