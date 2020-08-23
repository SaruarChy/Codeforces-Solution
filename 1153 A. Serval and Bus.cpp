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
    int n,t,s,d;
    cin>>n>>t;
    pair<int, int> v ={1e9, -1};
    for(int i=1; i<=n; i++){
        cin>>s>>d;
        while(s < t){
            s += d;
        }
        v = min(pair< int,int>(s,i),v);
    }
    cout<<v.second<<endl;
    return 0;
}

