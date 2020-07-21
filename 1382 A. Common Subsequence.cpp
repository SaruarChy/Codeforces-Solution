//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,m;
    int a[1001],b[1001];
    cin>>t;
    while(t--){
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
                if(a[i] == b[j]){
                    v.push_back(a[i]);
                    break;
                }
            }
            if(v.size() == 1){
                break;
            }
        }
        if(v.size() == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<v.size()<<" ";
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<endl;
            }
        }
    }

    return 0;
}

