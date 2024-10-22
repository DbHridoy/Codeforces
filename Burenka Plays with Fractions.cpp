#include<iostream>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=c*b;
	f=d*a;
	// cout<<"e = "<<e<<endl;
	// cout<<"f = "<<f<<endl;
	if(e==f)cout<<0<<endl;
	else {
		if(e==1||f==1)cout<<1<<endl;
		else if(e==0||f==0)cout<<1<<endl;
		else if((e%f==0)||(f%e==0))cout<<1<<endl;
		else cout<<2<<endl;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}