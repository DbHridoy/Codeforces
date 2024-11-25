#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[3],t;
	cin>>t;
	while(t--){
		cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
//	cout<<a[0]<<a[1]<<a[2]<<endl;
	if(a[1]!=a[2]){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
	}
	}

	return 0;
}
