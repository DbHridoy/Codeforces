#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b,c;
    char a;
    cin>>a>>b>>c;
    switch(b[0])
    {
    case 'T':
        b[0]=70;
        break;
    case 'J':
        b[0]=71;
        break;
    case 'Q':
        b[0]=72;
        break;
    case 'K':
        b[0]=73;
        break;
    case 'A':
        b[0]=74;
        break;
    }
    switch(c[0])
    {
    case 'T':
        c[0]=70;
        break;
    case 'J':
        c[0]=71;
        break;
    case 'Q':
        c[0]=72;
        break;
    case 'K':
        c[0]=73;
        break;
    case 'A':
        c[0]=74;
        break;
    }
    if(b[1]==a&&c[1]!=a)
    {
        cout<<"YES"<<endl;
    }
    else if(b[1]==c[1]){
        if(b[0]>c[0]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
