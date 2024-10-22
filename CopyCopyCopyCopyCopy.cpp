#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        set<long long>s;
        for(i=0;i<n;i++){
            cin>>j;
            s.insert(j);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
