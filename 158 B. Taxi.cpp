//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,a;
    int mp[5];
    memset(mp,0,sizeof(mp));
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
    }
	int ans = 0;
	ans += mp[4] + mp[3] + (mp[2] / 2);
	mp[1] -= min(mp[3],mp[1]);
	if (mp[2] & 1)
	{
		mp[1] -= min(2, mp[1]);
		ans ++;
	}
	ans += (mp[1] + 3) / 4;

    cout<<ans<<endl;

    return 0;
}
