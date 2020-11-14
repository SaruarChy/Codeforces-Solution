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

    ll n,a[200001];
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll sum = 0,need = a[n-1];
    for(ll i=n-1; i>=0; i--){
        if(a[i] >= need){
            sum += need;
            need--;
        }
        else if(need > a[i]){
            sum += a[i];
            need = a[i] - 1;
        }
        if(need == 0)
            break;
    }
    cout<<sum<<endl;

    return 0;
}

