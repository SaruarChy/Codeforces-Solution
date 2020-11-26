#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt", "r", stdin);
    int n,one = 0,mx = 0;
    string s[1001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<n; j++){
            if(s[j][i] == '1'){
                one++;
            }
        }
        mx = max(mx,one);
        one = 0;
    }
    cout<<mx<<endl;
}
