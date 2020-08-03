//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
typedef long long LL;
int n,a[300001],b[300001];
LL sum = 0,temp = 0;
int main()
{
    fastread();
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0; i<n/2; i++){
        temp = (a[i] + b[i]) * (a[i] + b[i]);
        sum += 1LL * temp;
    }
    printf("%lld\n",sum);

    return 0;
}
