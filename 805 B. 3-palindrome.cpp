#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);

    ll n,j = 0;
    cin>>n;
    string s[] = {"b","b","a","a"};

    for(int i=0; i<n; i++){
        cout<<s[j];
        j++;
        if(j == 4){
            j = 0;
        }
    }
    cout<<endl;

    return 0;
}

