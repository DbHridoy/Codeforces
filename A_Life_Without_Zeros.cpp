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
    int a ,b, c;
    cin>>a>>b;
    c=a+b;
    k=1;
    int ap,bp,cp;
    ap=bp=cp=0;
    while(a){
        i=a%10;
        if(i!=0){
            ap+=i*k;
            k*=10;
        }
        a/=10;
    }
    k=1;
    while(b){
        i=b%10;
        if(i!=0){
            bp+=i*k;
            k*=10;
        }
        b/=10;
    }
    k=1;
    while(c){
        i=c%10;
        if(i!=0){
            cp+=i*k;
            k*=10;
        }
        c/=10;
    }
    // cout<<ap<<" "<<bp<<" "<<cp<<endl;
    if(ap+bp==cp){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return (0);
}