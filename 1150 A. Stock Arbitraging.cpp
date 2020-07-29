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
    int n,m,r;
    int a[31],b[31];
    cin>>n>>m>>r;
    int had = r;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int buy = 0,sell = 0,money = 0,flag = 0;
    sort(a,a+n);
    if(r >= a[0]){
        buy = r / a[0];
        r %= a[0];
        money = buy * a[0] + r;
    }
    sort(b,b+m,greater<int>());
    for(int i=0; i<m; i++){
        if(b[i] > a[0]){
            money = 0;
            sell = buy * b[i];
            money += sell + r;
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<money<<endl;
    }
    else{
        cout<<had<<endl;
    }
    return 0;
}

