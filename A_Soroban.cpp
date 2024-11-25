#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char,long long>
#define moi map<long long,long long>
#define mos map<long long,string>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
int32_t main()
{
faster;
    int i,j,k;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    mos m;
    m[10]="O-";
    m[0]="|-OOOO";
    m[1]="|O-OOO";
    m[2]="|OO-OO";
    m[3]="|OOO-O";
    m[4]="|OOOO-";
    m[5]="-O";
    int n;
    cin>>n;
    while(1){
        i=n%10;
        n=n/10;
        if(i>=5){
            cout<<m[5]<<m[i-5]<<endl;
        }
        else{
            cout<<m[10]<<m[i]<<endl;
        }
        if(n==0){
            break;
        }
    }
    return (0);
}