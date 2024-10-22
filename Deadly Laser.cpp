#include <iostream>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
	int n,m,sx,sy,d;
	cin>>n>>m>>sx>>sy>>d;
	int ru,rd,cl,cr;
	ru=sx-d;
	rd=sx+d;
	cl=sy-d;
	cr=sy+d;
	if(sx==n&&sy==m)cout<<-1<<endl;
	else if((ru>1&&cr<m)||(rd<n&&cl>1))cout<<n+m-2<<endl;
	// else if((ru>1||rd<n)&&(cl>1||cr<m))cout<<n+m-2<<endl;
	else cout<<-1<<endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	// freopen("./input.txt", "r", stdin);
	// freopen("./output.txt", "w", stdout);
	cin>>t;
	while(t--){
		solve();
	}
	return (0);
}