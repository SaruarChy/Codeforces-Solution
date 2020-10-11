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
        int div = 0;
        int sev = 0, five = 0, three = 0;
        if(n % 7 == 0){
            sev += n/7;
            n -= (sev * 7);
        }
        if(n % 5 == 0){
            five += n/5;
            n -= (five * 5);
        }
        if(n % 3 == 0){
            three += n/3;
            n -= (three * 3);
        }
        if( n % 7 == 5){
            sev += (n / 7);
            five++;
            n -= (sev * 7) + 5;
        }
        if( n % 7 == 3){
            sev += (n / 7);
            three++;
            n -= (sev * 7) + 3;
        }
        if( n % 5 == 2){
            div = n/5;
            if(div >= 2){
                five += (n / 5);
                five--;
                sev++;
                n -= (five * 5) + 7;
            }

        }
        if( n % 5 == 3){
            five += (n / 5);
            three++;
            n -= (five * 5) + 3;
        }
        if(n % 3 == 1){
            div = n/3;
            if(div >= 3){
                three += (n / 3);
                three -= 2;
                sev++;
                n -= (three * 3) + 7;
            }
        }
        if(n % 3 == 2){
            div = n/3;
            if(div >= 2){
                three += (n/3);
                three--;
                five++;
                n-= (three * 3) + 5;
            }
        }

        if(n == 0){
            cout<<three<<" "<<five<<" "<<sev<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

    return 0;
}
