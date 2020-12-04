#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%4==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
