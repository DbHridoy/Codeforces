#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    vector<pair<int,int>>::iterator it;
    int n,k,b,i,s=0,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>b;
        v.push_back(make_pair(b,i+1));
    }
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++){
        s+=it->first;
        if(s>k){
            break;
        }
        else {
                a[c]=it->second;
            c++;
        }
    }
    cout<<c<<endl;
    for(i=0;i<c;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
