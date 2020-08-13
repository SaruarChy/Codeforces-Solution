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
    int t;
    cin>>t;
    while(t--){
        ll a[5],odd = 0,even = 0;
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        for(int i=0; i<4; i++){
            if(a[i] % 2 == 1)odd++;
            else even++;
        }
        if( (odd == 1 && even == 3) || (even == 4) ){
            cout<<"YES"<<endl;
        }
        else{
            int flag = 0,j = 2;
            while(j--){
                if(a[0] <= 0 || a[1] <= 0 || a[2]<= 0)break;
                a[0]--,a[1]--,a[2]--;
                a[3] += 3;
                odd = 0,even = 0;
                for(int i=0; i<4; i++){
                    if(a[i] % 2 == 1)odd++;
                    else even++;
                }
                if( (odd == 1 && even == 3) || (even == 4)){
                    flag = 1;
                    break;
                }
                else{
                    flag = 0;
                }

            }
            if(flag == 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
