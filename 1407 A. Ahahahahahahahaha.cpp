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
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int one = 0,zero = 0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1)one++;
            else zero++;
        }
        n /= 2;
        if(one <= n){
            one = 0;
        }
        else if(zero < n){
            zero = 0;
            if(one & 1){
                one--;
            }
        }
        if(one > 0){
            cout<<one<<endl;
        }
        if(zero > 0){
            cout<<zero<<endl;
        }
        for(int i=0; i<one; i++){
            cout<<1<<" ";
        }
        for(int i=0; i<zero; i++){
            cout<<0<<" ";
        }
        cout<<endl;
    }

    return 0;
}
