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

    int t,n,m,a[15][15];
    cin>>t;
    while(t--){
        cin>>n>>m;
        int neg = 0,sum = 0, Min = 200;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j] < 0){
                    neg++;
                }
                sum += abs(a[i][j]);
                Min = min(Min,abs(a[i][j]));
            }
        }
        if(neg & 1){
            cout<<sum-(2 * Min)<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }

    return 0;
}

