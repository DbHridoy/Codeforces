#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    long long n,i,j,k;
    for(i=1;i<100000;i++){
        s+=to_string(i);
    }
    cin>>n;
    cout<<s[n-1]<<endl;
    return 0;
}
