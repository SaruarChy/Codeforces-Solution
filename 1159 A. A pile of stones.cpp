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
    int n,have = 0;;
    string s;
    cin>>n>>s;
    //reverse(s.begin(),s.end());
    for(int i=0; i<n; i++){
        if(s[i] == '-' && have > 0){
            have--;
        }
        else if(s[i] == '+'){
            have++;
        }
    }
    cout<<have<<endl;

    return 0;
}

