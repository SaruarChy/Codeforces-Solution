//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        int flag = 0;
        cin>>n;
        ll a[100001];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=n-1; i>=0; i--){
            if(a[i] <= i+1){
                cout<<i+2<<endl;
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag == 0){
            cout<<1<<endl;
        }
    }
    return 0;

}
