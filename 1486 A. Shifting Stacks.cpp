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
    ll t,n,a[105];
    cin>>t;
    while(t--){
        bool ok = false;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        ll have = a[0];
        a[0] = 0;
        for(int i=1; i<n; i++){
            if(a[i] > a[i-1]){
                have += a[i] - (a[i-1]+1);
                a[i] = a[i-1] + 1;
            }
            else if(a[i-1] == a[i]){
                if(have > 0){
                    a[i]++;
                    have--;
                }
            }
            else{
                ll gap = a[i-1] - a[i] + 1;
                if(gap <= have){
                    a[i] += gap;
                    have -= gap;
                }

            }
        }
        for(int i=1; i<n; i++){
            if(a[i] > a[i-1])ok = true;
            else{
                ok = false;
                break;
            }

        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

