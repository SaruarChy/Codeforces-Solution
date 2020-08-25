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
    int n,a[100001];
    ll sum = 0;
    int pos = 0,neg = 0,zero = 0,k = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //sort(a,a+n);

    for(int i=0; i<n; i++){
        if(a[i] == 1 || a[i] == -1)continue;
        else if(a[i] < -1){
            sum += abs(a[i] + 1);
            a[i] -= (a[i] + 1);
        }
        else if( a[i] > 1){
            sum += a[i] - 1;
            a[i] = 1;
        }

    }
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            zero++;
            a[i] = 1;
        }
        else if(a[i] == -1)neg++;
        else if(a[i] == 1)pos++;
    }
    sum += zero;
    pos += zero;
    //zero = 0;
    if(neg % 2 == 1){
        if(zero > 0)pos--;
        else sum+=2;
    }

    cout<<sum<<endl;
}
