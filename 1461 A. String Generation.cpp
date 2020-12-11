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
    ll t,n,k;
    cin>>t;
    while(t--){
        string s[] = {"a","b","c"};
        string a;
        cin>>n>>k;
        for(int i=0; i<k; i++){
            a += 'a';
        }

        int j = 2;
        for(int i=0; i<n-k; i++){
            a += s[j];
            j--;
            if(j == -1)j=2;
        }
        cout<<a<<endl;
    }

    return 0;
}
