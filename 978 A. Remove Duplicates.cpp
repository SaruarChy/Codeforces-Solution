#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();
    int n,a[55],pos[1005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    fill(pos,pos+1005,0);

    vector<int>v;
    for(int i=n-1; i>=0; i--){
        if(pos[a[i]]==0){
            pos[a[i]]=1;
            v.push_back(a[i]);
        }
    }
    cout<<v.size()<<endl;
    int s;
    s=v.size();
    for(int i=s-1; i>=0; i--)
        cout<<v[i]<<" ";
    cout<<endl;


    return 0;
}
