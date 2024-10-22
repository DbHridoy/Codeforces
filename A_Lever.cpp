#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
int32_t main()
{
faster;
    int i,j;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    string s;
    cin>>s;
    int l=s.length();
    int m=s.find('^');
    int t1=0,t2=0;
    for(i=0;i<l;i++){
        if(s[i]>='1'&&s[i]<='9'&&i<m){
            t1+=(s[i]-'0')*(m-i);
        }
        else if(s[i]>='1'&&s[i]<='9'&&i>m){
            t2+=(s[i]-'0')*(i-m);
        }
    }
    if(t1==t2)cout<<"balance"<<endl;
    else if(t1>t2)cout<<"left"<<endl;
    else cout<<"right"<<endl;
    return (0);
}