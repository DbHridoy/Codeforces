#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long t,n,a,i;
	cin>>t;
	while(t--){
		cin>>n;
		vector<long long>s;
		map<long long,long long>m;
		for(i=0;i<2*n;i++){
			cin>>a;
			m[a]++;
			if(m[a]==1)
			s.push_back(a);
		}
		for(auto it:s)cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
