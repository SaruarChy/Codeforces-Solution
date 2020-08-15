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
    int na,nb;
    ll k,m;
    ll a[100001],b[100001];
    cin>>na>>nb;
    cin>>k>>m;
    for(int i=0; i<na; i++){
        cin>>a[i];
    }
    for(int i=0; i<nb; i++){
        cin>>b[i];
    }

    int aMin = a[k-1];
    int flag = 1;
    sort(b,b+nb,greater<int>());
    for(int i=0; i<m; i++){
        if(aMin < b[i]){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}

