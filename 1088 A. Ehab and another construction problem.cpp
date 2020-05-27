//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,a,b;

    int ans1 = 0, ans2 = 0, flag = 0;

    cin>>n;
    if(n < 2){
        cout<<-1<<endl;
        return 0;
    }
    if(n%2 != 0){
        a = n-1;
    }
    else{
        a = n;
    }
    cout<<a<<" "<<2<<endl;

    return 0;
}
