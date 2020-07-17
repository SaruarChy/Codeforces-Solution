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
    int t,n,a[110];
    cin>>t;
    while(t--){
        cin>>n;
        n *= 2;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int pos[110];
        fill(pos,pos+110,0);

        vector<int>v;
        for(int i=n-1; i>=0; i--){
            if(pos[a[i]]==0){
                pos[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        int s;
        s=v.size();
        for(int i=s-1; i>=0; i--)
            cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}

