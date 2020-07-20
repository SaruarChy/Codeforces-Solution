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
    int t,n,d,a[101];
    cin>>t;
    while(t--){
        cin>>n>>d;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 1){
            cout<<a[0]<<endl;
            continue;
        }
        while(d > 0){
            int flag = 0;
            for(int i=1; i<n; i++){
                if(a[i] > 0){
                    a[i-1] += 1;
                    a[i]--;
                    d--;
                    break;
                }
            }
            for(int i=1; i<n; i++){
                if(a[i] > 0){
                    flag = 1;
                }
            }
            if(flag == 0){
                break;
            }
        }
        cout<<a[0]<<endl;

    }

    return 0;
}
