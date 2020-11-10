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

    ll n,k;
    cin>>n>>k;
    int m = 1001;
    bool prime[m+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=m; p++){
        if(prime[p] == true){
            for(int i=p*p; i<m; i += p)
                prime[i] = false;
        }
    }
    vector<int>v;
    vector<int>:: iterator itr;
    for(int i=2; i<m; i++){
       if(prime[i]){
            v.pb(i);
       }
    }

    int sum = 0;
    vector<int>have;
    for(int i=0; i<v.size()-1; i++){
        sum = 1 + (v[i] + v[i+1]);
        itr = find(v.begin(),v.end(), sum);
        if(itr != v.end()){
            have.pb(sum);
        }
    }
    int c = 0;
    for(ll i=0; i<have.size(); i++){
        if(have[i] <= n){
            c++;
        }
        else{
            break;
        }
    }
    if(c >= k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

