#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve(){
    string s,c;
    cin>>s;
    c=s;
    if(s.length()==3&&s[0]==s[2]){
        cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    }
    else{
        c.erase(c.begin());
        c.erase(c.end()-1);
        cout<<s[0]<<" "<<c<<" "<<s[s.length()-1]<<endl;
    }
}

int32_t main()
{
faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin>>t;
    cin.ignore();
    while(t--){
    // cin.ignore();
        solve();
        cin.ignore();
    }
    return (0);
}