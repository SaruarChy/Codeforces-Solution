//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int c,vo,v1,a,l;
    cin>>c>>vo>>v1>>a>>l;

    int cnt=1,read=0,have=0;

    have = read = vo;
    while(have < c)
    {
        read = min(v1,read + a);
        have += read - l;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
