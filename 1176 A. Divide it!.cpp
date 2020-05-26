//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ull n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        while(n > 1){
            if(n % 2 == 0){
                n/=2;
                ans++;
            }
            else if(n % 3 == 0){
                n = (2*n)/3;
                ans++;
            }
            else if(n % 5 == 0){
                n = (4*n)/5;
                ans++;
            }
            else if(  (n % 2 != 0 && n % 3 != 0) && (n % 5 != 0) ){
                if(n != 1){
                    cout<<"-1\n";
                    break;
                }
            }
            if(n == 1){
                cout<<ans<<endl;
                break;
            }
        }
    }

    return 0;
}
