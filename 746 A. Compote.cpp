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
    int a,b,c,sum = 0;
    cin>>a>>b>>c;
    int flag = 0;
    while(flag != 1){
        if(a*2 <= b && ((a*2)*2) <= c){
            sum = a + a*2 + (a*2)*2;
            flag = 1;
        }
        else{
            a--;
        }
    }
    cout<<sum<<endl;

    return 0;
}

