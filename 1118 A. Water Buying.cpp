//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        ll n,ans = 0;
        cin>>n>>a>>b;
        if(a * 2 < b){
            ans = n * a;
        }
        else{
            ll mod = n % 2;
            ans = (n / 2) * b + (mod * a);
        }
        cout<<ans<<endl;
    }
    return 0;
}

