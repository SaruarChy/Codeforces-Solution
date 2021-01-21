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
    ll n;
    cin>>n;
    char a[n+5][n+5];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == '.'){
                if((a[i+1][j-1] == '.' && a[i+1][j+1] == '.') && (a[i+1][j] == '.')){
                    if(a[i+2][j] == '.'){
                        if(i < n && j < n){
                            a[i][j] = a[i+1][j-1] = a[i+1][j] = a[i+1][j+1] = a[i+2][j] = '#';
                        }
                    }
                }
            }
        }
    }
    bool ok = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] == '#'){
                ok = true;
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok == false)break;
    }
    if(ok){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}
