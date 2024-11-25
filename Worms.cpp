#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main()
{
	ll n;
	cin>>n;
	ll a[n],i,s=1,sm=0;
	map<ll,ll>mp;
	for(i=0;i<n;i++){
		cin>>a[i];
		sm+=a[i];
		for(;s<=sm;s++){
			mp[s]=i+1;
		}
	}
	ll m;
	cin>>m;
	ll b[m];
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	for(i=0;i<m;i++){
		cout<<mp[b[i]]<<endl;
	}
	return 0;
}
