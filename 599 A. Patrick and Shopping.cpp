#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;

    ll len_1 = 0, len_2 = 0,len_3 = 0,len_4 = 0;
    len_1 = (d1 * 2) + (d2 * 2);
    len_2 = d1 + d2 + d3;
    len_3 = (d1 * 2) + (d3 * 2);
    len_4 = (d2 * 2) + (d3 * 2);

    cout<<min(len_1,min(len_2,min(len_3,len_4)));

    return 0;
}

