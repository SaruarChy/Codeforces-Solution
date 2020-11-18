#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k,a;

    cin>>n>>k;
    vector< pair <int,int> > v;
    for(int i=1; i<=n; i++){
        cin>>a;
        v.pb(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[k-1].first<<endl;
    for(int i=0; i<k; i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;

    return 0;
}
