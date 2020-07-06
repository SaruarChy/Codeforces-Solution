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
    int A,B;
    ll a,b;
    cin>>A>>B;
    if(A == B){
        a = A*10;
        b = a;
        cout<<a<<" "<<b+1<<endl;
    }
    else if(A+1 == B){
        b = B*10;
        a = b;
        cout<<a-1<<" "<<b<<endl;
    }
    else if(B*10 == A+1){
        cout<<A<<" "<<B*10<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}
