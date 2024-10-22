#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,b,i,j,k,l;
    string s;
    cin>>t;
    while(t--){
            j=k=0;
        cin>>n>>s;
        l=s.length();
    long long e[l],o[l];
        for(i=0;i<l;i++){
            b=s[i]-48;
            if(i&1){
                e[j]=b;
                j++;
            }
            else{
                o[k]=b;
                k++;
            }
        }
        sort(e,e+j);
        sort(o,o+k);
//        for(i=0;i<j;i++)cout<<e[i]<<"\t";
//        cout<<endl;
//        for(i=0;i<k;i++)cout<<o[i]<<"\t";
//        cout<<endl;
        if(l&1){
            if(o[0]&1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(e[0]&1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
