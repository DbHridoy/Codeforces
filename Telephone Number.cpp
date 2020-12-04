#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        k=s.find('8');
        if(k!=string::npos){
//                cout<<k<<endl;
            if(n-k>=11){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
