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
    int i,j,k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin>>i;
    j=i;
    string s;
    while(1){
        j++;
        s=to_string(j);
        k=s.find('8');
        if(k!=string::npos){
            cout<<j-i<<endl;
            break;
        }
    }
    return (0);
}