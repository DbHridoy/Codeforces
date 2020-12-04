#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long h,m,t;
	cin>>t;
	while(t--){
		cin>>h>>m;
		cout<<1440-(h*60+m)<<endl;
	}
	return 0;
}
