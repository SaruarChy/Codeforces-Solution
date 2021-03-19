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
    ll t;
    cin>>t;
    while(t--){
        bool ok_w = false, ok_b = false;
        ll n, k1, k2, w, b, b1= 0, b2 = 0;
        cin>>n>>k1>>k2>>w>>b;

        if(k1 < k2)swap(k1,k2);
        b1 = n - k1, b2 = n - k2;

        k1 -= k2;
        ll div_w = (k1 / 2);
        ll left_w = w - k2;
        if(div_w >= left_w)ok_w = true;

        if(b1 < b2)swap(b1,b2);
        b1 -= b2;
        ll div_b = (b1 / 2);
        ll left_b = b - b2;
        if(div_b >= left_b)ok_b = true;

        if(ok_w == true && ok_b == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

