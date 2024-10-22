#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,l;
    k=l=0;
    string m,s="",p="";
    cin>>n>>m;
    for(i=0,j=n;i<n;i++,j++){
		s+=m[i];
		p+=m[j];
    }
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
//    cout<<s<<"\t"<<p<<endl;
    for(i=0;i<n;i++){
		if(s[i]>p[i]){
			k++;
		}
		else if(s[i]<p[i]){
			l++;
		}
    }
    if(k==n||l==n){
		cout<<"YES"<<endl;
    }
    else {
		cout<<"NO"<<endl;
    }
    return 0;
}
