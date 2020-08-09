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
    int t,n,m;
    cin>>t;
    while(t--){
        char a[101][101];
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        int c = 0;
        for(int i=0; i<n-1; i++){
            for(int j=m-1; j<m; j++){
                if(a[i][j] == 'R'){
                    c++;
                    a[i][j] = 'D';
                }
            }
        }
        for(int i=n-1; i<n; i++){
            for(int j=0; j<m-1; j++){
                if(a[i][j] == 'D'){
                    c++;
                    a[i][j] = 'R';
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
