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
    int n,k,a[100];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int d = 0,sum = 0,rem = 0;
    for(int i=0; i<n; i++){
        a[i] += rem;
        rem = 0;
        if(a[i] <= 8){
            sum += a[i];
            a[i] = 0;
            d++;
        }
        else if(a[i] > 8){
            sum += 8;
            a[i] -= 8;
            rem += a[i];
            d++;
        }
        if(sum >= k){
            break;
        }
    }
    if(sum >= k){
        cout<<d<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}

