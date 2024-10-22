#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,f,e,k,l,mf,me,n;
    cin>>t;
    string s;
    while(t--) {
        cin>>n>>s;
        l=s.length();
        f=e=mf=me=0;
        for(i=0; i<l; i++) {
            if(s[i]=='(') {
                f++;
                e=0;
            } else {
                e++;
                f=0;
            }
            if(e>me) {
                me=e;
            }
            if(f>mf) {
                mf=f;
            }
        }
//        cout<<"me = "<<me<<" mf = "<<mf<<endl;
        if(me>mf) {
            cout<<mf<<endl;
        } else if(me<mf) {
            cout<<me<<endl;
        } else {
        	if(f==0){
				 cout<<0<<endl;
        	}
           else if(e==0){
			cout<<me<<endl;
           }
        }
    }
    return 0;
}
