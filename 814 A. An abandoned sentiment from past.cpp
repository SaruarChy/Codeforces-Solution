#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,k;
    ll a[1001],b[1001];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<k; i++){
        cin>>b[i];
    }
    sort(b,b+k,greater<int>());

    int j = 0;
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            a[i] = b[j];
            j++;
        }
    }
    if(is_sorted(a,a+n)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


    return 0;
}

