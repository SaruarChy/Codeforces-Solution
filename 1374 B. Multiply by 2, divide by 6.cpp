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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        if(n == 2){
            cout<<-1<<endl;
            continue;
        }
        ll c = 0;
        while(n > 1){
            if(n % 6 == 0){
                n /=6;
                c++;
            }
            else{
                n *= 2;
                c++;
            }
            if(n < 10){
                if( (n * 2) % 6 != 0){
                    break;
                }
            }
        }
        if(n == 1){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
