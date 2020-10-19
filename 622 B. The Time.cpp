#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int h,m,a;
    char c;
    int hr,mi;
    cin>>h>>c>>m>>a;
    mi = m + a;
    hr = mi / 60;
    mi %= 60;
    hr = (h + hr) % 24;

    if(hr < 10 && mi < 10){
        cout<<0<<hr<<c<<0<<mi;
    }
    else if(hr >= 10 && mi < 10){
        cout<<hr<<c<<0<<mi<<endl;
    }
    else if(hr < 10 && mi >= 10){
        cout<<0<<hr<<c<<mi<<endl;
    }
    else{
        cout<<hr<<c<<mi<<endl;
    }

    return 0;
}

