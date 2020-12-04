#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,a,b,i,c;
	cin>>t;
	while(t--){
		cin>>a>>b;
		i=abs(b-a);
		c=i/10;
		if(i%10!=0)
			c++;
		cout<<c<<endl;
	}
	return 0;
}
