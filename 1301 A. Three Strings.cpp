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
    int t,n;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        n = a.length();
        int op = 0;
        for(int i=0; i<n; i++){
            if(a[i] != c[i] && b[i] == c[i]){
                swap(a[i],c[i]);
                op++;
            }
            else if(b[i] != c[i] && a[i] == c[i] ){
                swap(b[i],c[i]);
                op++;
            }
            else if(a[i] == b[i] && b[i] == c[i])op++;
        }
//        cout<<a<<endl;
//        cout<<b<<endl;
//        cout<<c<<endl;
        if(a == b && n == op){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }

    return 0;
}
