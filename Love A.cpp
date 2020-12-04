#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long a,b,c=0,d,l;
    cin>>s;
    l=s.length();
    for(a=0;a<l;a++){
        if(s[a]=='a'){
            c++;
        }
    }
    if(l-c<c){
        cout<<l<<endl;
    }
    else{
        cout<<2*c-1<<endl;
    }
    return 0;
}
