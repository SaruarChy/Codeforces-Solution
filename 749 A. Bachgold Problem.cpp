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
    int n,div = 0;
    cin>>n;
    if(n % 2 == 1){
        div = (n/2);
        cout<<div<<endl<<3<<" ";
        for(int i=0; i<div-1; i++)
            cout<<2<<" ";
        cout<<endl;
    }
    else{
        div = n/2;
        cout<<div<<endl;
        for(int i=0; i<div; i++)
            cout<<2<<" ";
        cout<<endl;
    }

    return 0;
}
