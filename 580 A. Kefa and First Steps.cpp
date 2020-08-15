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
    int n;
    ll a[100001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans = 0,c = 1;
    for(int i=1; i<n; i++){
        if(a[i] >= a[i-1]){
            c++;
        }
        else{
            ans = max(ans,c);
            c = 1;
        }
    }
    cout<<max(ans,c)<<endl;



    return 0;
}

