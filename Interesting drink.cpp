#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n,q,i,j,k,l;
	cin>>n;
	long long x[n];
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	cin>>q;
	long long m[q];
	sort(x,x+n);
	for(i=0;i<q;i++){
		cin>>m[i];
		cout<<upper_bound(x,x+n,m[i])-x<<endl;
	}
	return 0;
}
