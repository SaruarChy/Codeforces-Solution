#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

map <ll, ll> mp;
map <ll, ll>::iterator it;

int main()
{

    ll tc, num, t = 1, pownum;

    sc1(num);

    ll arr[num];

    for(ll i = 0; i < num; i++)
        sc1(arr[i]);

    sort(arr, arr + num);

    for(ll i = 0; i < num - 1; i++){
        for(ll j = i + 1; j < num; j++){
            mp[arr[i] + arr[j]]++;
        }
    }

    ll ans = 0;
    for(it = mp.begin(); it != mp.end(); it++){
        ans = max(ans, it->second);
    }

    pf1(ans);

    return 0;
}
