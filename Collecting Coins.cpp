#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long t,a,b,c,d,e,f,g,n;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		d=max(a,max(b,c))*3;
		e=a+b+c;
		f=d-e;
		g=n-f;
		if(g<0)cout<<"NO"<<endl;
		else if(g%3==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
