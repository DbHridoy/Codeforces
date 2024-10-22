
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,i,j,k,l,a,b,c,n;
	cin>>x>>y>>n;
	long long f[10];
//	cout<<"n = "<<n<<endl;
	f[1]=x;
	f[2]=y;
	for(i=3;i<=6;i++){
		f[i]=f[i-1]-f[i-2];
	}
//	cout<<"n = "<<n<<endl;
	j=n%6;
//	cout<<"j = "<<j<<endl;
	if(j==0)f[n]=f[6];
	else f[n]=f[j];
	f[n]%=1000000007;
//	cout<<"f[n] = "<<f[n]<<endl;
	if(f[n]>=0)cout<<f[n]%1000000007<<endl;
	else cout<<f[n]+1000000007<<endl;
	return 0;
}
