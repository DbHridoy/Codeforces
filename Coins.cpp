#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n>>s;
    if(s%n)cout<<s/n+1<<endl;
    else cout<<s/n<<endl;
    return 0;
}
