#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n,i,j=0,k,c=0;
	cin>>n;
	for(i=1;c<=n;i++){
		j+=i;
		c+=j;
//		cout<<"j = "<<j<<" c = "<<c<<endl;
	}
	if(c==n)
	cout<<i-1<<endl;
	else cout<<i-2<<endl;
	return 0;
}
