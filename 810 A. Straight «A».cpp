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
    int n,a,need = 0;
    double sum = 0.0,k;

    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        sum+=a;
    }
    double div = 0.0,range = 0.0;
    div = sum / n;
    range = k - 0.5;
    while(div < range){
        need++;
        sum += k;
        n++;
        div = sum/n;
    }
    cout<<need<<endl;

    return 0;
}

