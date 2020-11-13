#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    //afreopen("input.txt","r", stdin);

    ll n,div = 0;
    string s[] = {"R","O","Y","G","B","I","V"};
    string t;

    cin>>n;

    div = n/7;
    while(div--){
        for(int i=0; i<7; i++){
            t += s[i];
        }
    }
    if(n % 7 == 1){
        t += "G";
    }
    else if(n % 7 == 2){
        t += "GB";
    }
    else if(n % 7 == 3){
        t += "YGB";
    }
    else if(n % 7 == 4){
        t += "YGBI";
    }
    else if(n % 7 == 5){
        t += "OYGBI";
    }
    else if(n % 7 == 6){
        t += "OYGBIV";
    }

    cout<<t<<endl;

    return 0;
}

