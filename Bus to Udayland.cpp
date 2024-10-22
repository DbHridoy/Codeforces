#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,d=0;
    cin>>n;
    char a[n][5];
    for(i=0; i<n; i++) {
        for(j=0; j<5; j++) {
            cin>>a[i][j];
        }
        if(a[i][0]=='O'&&a[i][1]=='O'&&d==0) {
            a[i][0]=a[i][1]='+';
            d++;
        } else if(a[i][3]=='O'&&a[i][4]=='O'&&d==0) {
            a[i][3]=a[i][4]='+';
            d++;
        }
    }
    if(d>0) {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++) {
            for(j=0; j<5; j++) {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
