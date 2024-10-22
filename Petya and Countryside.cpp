#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,mi=1,mx=1,m=1;
	cin>>a[0];
	for(i=1;i<n;i++){
			cin>>a[i];
		if(a[i]>=a[i-1]){
			mi=1;
			mx++;
		}
		else if(a[i]<=a[i-1]){
			mx=1 ;
			mi++;
		}
		m=max(mi,mx);
	}
	cout<<m<<endl;
}
