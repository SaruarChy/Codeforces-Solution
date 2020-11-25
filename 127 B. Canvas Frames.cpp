#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    int n,a[101],d;
    map<int,int>mp;
    map<int,int>::iterator itr;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }
    int ans = 0,two = 0,four = 0;
    for(itr=mp.begin(); itr!=mp.end(); itr++){
        d = itr->second;
        if(d >= 2){
            two += (d/2);
        }
    }
    ans = two / 2;
    cout<<ans<<endl;

    return 0;
}
