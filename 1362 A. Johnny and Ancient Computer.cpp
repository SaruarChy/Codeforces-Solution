//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        ll c=0;
        cin>>a>>b;
        if(a == b){
            cout<<0<<endl;
            continue;
        }
        if(a > b){
            while(a > b){
                if(a % 8 == 0 && a/8 >= b){
                    a /=8;
                    c++;
                }
                else if(a % 4 == 0 && a/4 >= b){
                    a /=4;
                    c++;
                }
                else if(a % 2 == 0 && a/2 >= b){
                    a /=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        else{
            while(a < b){
                if(a * 8 <= b){
                    a *=8;
                    c++;
                }
                else if(a * 4 <= b){
                    a *=4;
                    c++;
                }
                else if(a * 2 <= b){
                    a *=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        if(a == b){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}

