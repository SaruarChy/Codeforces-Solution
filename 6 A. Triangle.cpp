#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool tri(ll a, ll b, ll c){
    return ( (a + b > c) && (a + c > b) && (b + c > a) );
}

bool seg(ll a, ll b, ll c){
    return ( (a == b + c) || (b == a + c) || (c == a + b));
}

int main()
{
    fastread();
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    bool triangle = false;
    bool segment = false;

    triangle = triangle || (tri(a,b,c));
    triangle = triangle || (tri(a,b,d));
    triangle = triangle || (tri(a,c,d));
    triangle = triangle || (tri(b,c,d));

    segment = segment || (seg(a,b,c));
    segment = segment || (seg(a,b,d));
    segment = segment || (seg(a,c,d));
    segment = segment || (seg(b,c,d));

    if(triangle){
        cout<<"TRIANGLE"<<endl;
    }
    else if(segment){
        cout<<"SEGMENT"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }


    return 0;
}

