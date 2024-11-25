#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l;
    cin>>n>>m;
    map<string,string>ms;
    string a,b,c,d,s="";
    for(i=0; i<m; i++) {
        cin>>a>>b;
        if(a.length()>b.length()) {
            ms[a]=b;
            ms[b]=b;
        } else {

            ms[a]=a;
            ms[b]=a;
        }

    }
    for(i=0; i<n; i++) {
        cin>>a;
        s+=ms[a]+' ';
    }
    cout<<s<<endl;
    return 0;
}
