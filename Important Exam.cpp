#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,total=0;
    cin>>n>>m;
    string s[n];
    int a[m];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
            map<char,int>p;
        for(j=0;j<n;j++){
            p[s[j][i]]++;
        }
        total+=(a[i]*(max(p['A'],max(p['B'],max(p['C'],max(p['D'],p['E']))))));
    }
    cout<<total<<endl;
    return 0;
}
