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

    ll t,n,x,a[100],b[100];
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());

        bool flag = false;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = a[i] + b[i];
            if(sum <= x){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}
