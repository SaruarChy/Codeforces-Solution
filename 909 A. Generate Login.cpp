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
    ll l1,l2;
    string f,l,login;
    cin>>f>>l;
    l1 = f.length();
    l2 = l.length();
    login += f[0];
    for(ll j=0; j<l2; j++){
        for(ll i=1; i<l1; i++){
            if(f[i]-'a' < l[j]-'a'){
                login += f[i];
            }
            else{
                break;
            }
        }
        if(login.length() > 0){
            for(ll k=0; k<=j; k++){
                login += l[k];
            }
            break;
        }
    }
    cout<<login<<endl;


    return 0;
}

