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
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        char a[] = {"abcdefghijklmnopqrstuvwxyz"};
        int j = 0;
        for(int i=0; i<n; i++){
            cout<<a[j++];
            if(j == k){
                j = 0;
            }
        }cout<<endl;
    }

    return 0;
}

