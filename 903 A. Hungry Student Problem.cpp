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
    int t,n;
    cin>>t;
    while(t--){
        int flag = 0,prodsum = 0;
        cin>>n;
        for(int i=0; i<34; i++){
            for(int j=0; j<34; j++){
                prodsum = 3 * i + 7 * j;
                if(prodsum == n){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
