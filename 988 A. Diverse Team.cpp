//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,k,a[101];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int used[101];
    fill(used,used+101,0);
    vector<int>v;
    for(int i=0; i<n; i++){
        if(used[a[i]] == 0){
            v.push_back(i+1);
            used[a[i]] = 1;
        }
    }
    if(v.size() >= k){
        cout<<"YES\n";
        for(int i=0; i<k; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

