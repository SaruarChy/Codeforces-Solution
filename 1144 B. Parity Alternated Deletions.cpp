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
    ll a[2001];
    int odd = 0,even = 0,temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] % 2 == 0)even++;
        else odd++;
    }
    if(odd == even || (odd+1 == even || even+1 == odd)){
        cout<<0<<endl;
        return 0;
    }
    sort(a,a+n,greater<int>());
    if(odd > even){
        temp = 2;
        while(odd+even > 0){
            for(int i=0; i<n; i++){
                if(a[i] % 2 == 1 && temp % 2 == 0){
                    temp = a[i];
                    a[i] = -1;
                    odd--;
                    break;
                }
                else if(a[i] % 2 == 0 && temp % 2 == 1){
                    temp = a[i];
                    a[i] = -1;
                    even--;
                    break;
                }
            }
            if((odd == 0 && temp % 2 == 0) || (even == 0 && temp % 2 == 1))
                break;
        }
    }
    else if(odd < even){
        temp = 1;
        while(odd+even > 0){
            for(int i=0; i<n; i++){
                if(a[i] % 2 == 1 && temp % 2 == 0){
                    temp = a[i];
                    a[i] = -1;
                    odd--;
                    break;
                }
                else if(a[i] % 2 == 0 && temp % 2 == 1){
                    temp = a[i];
                    a[i] = -1;
                    even--;
                    break;
                }
            }
            if((odd == 0 && temp % 2 == 0) || (even == 0 && temp % 2 == 1))
                break;
        }
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] != -1){
            ans += a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
