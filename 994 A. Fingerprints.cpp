#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[11],b[11];
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    vector<int>v;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                v.push_back(a[i]);
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
