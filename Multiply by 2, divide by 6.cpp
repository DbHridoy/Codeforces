#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        long long a=0,b,c=0;
        while(n%2==0){
			n/=2;
			a++;
        }
        while(n%3==0){
			n/=3;
			c++;
        }
        if(n==1&&a<=c){
			cout<<c+c-a<<endl;
        }
        else{
			cout<<-1<<endl;
        }
    }
    return 0;
}
