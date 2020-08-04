//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
typedef long long LL;
int main()
{
    fastread();
    ll b,k,a[100001];
    cin>>b>>k;
    for(ll i=0; i<k; i++){
        cin>>a[i];
    }
    ll sum = 0,j = 0;
    j = k - 1;
    for(int i=0; i<k; i++){
        if(i+1 == k){
            sum += a[i];
        }
        else{
            sum += 1LL * a[i] * b;
        }
    }
    //cout<<sum<<endl;
    if(sum % 2 == 0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }


    return 0;
}

