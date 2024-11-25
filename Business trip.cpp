#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k,a[12],i,c=0,j=0;
	cin>>k;
	for(i=0;i<12;i++){
		cin>>a[i];
	}
	if(k==0){
		cout<<0<<endl;
		return 0;
	}
	sort(a,a+12);
//	for(i=0;i<12;i++){
//	cout<<a[i]<<" ";
//	}
//	cout<<endl;
	for(i=11;i>=0;i--){
		c++;
		j+=a[i];
		if(j>=k){
			cout<<c<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
