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
    int t,n,a[101];
    cin>>t;
    while(t--){
        int c = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int dif = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i == j && i == 0)continue;
                dif = a[j] - a[i];
                if(dif == 1)
                    c++;
            }
        }
        if(c == 0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }


    }

    return 0;
}
