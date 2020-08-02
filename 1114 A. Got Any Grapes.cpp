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
    int x,y,z;
    int a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    int Andrew = 0, Dmitry = 0, Michal = 0;
    if(a>= x){
        Andrew = 1;
        b += a - x;
    }
    if(b >= y){
        Dmitry = 1;
        c += b - y;
    }
    if(c >= z){
        Michal = 1;
    }
    if( (Andrew == 1 && Dmitry == 1 ) && Michal == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}

