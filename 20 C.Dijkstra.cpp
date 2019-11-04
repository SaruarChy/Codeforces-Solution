#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,i,j,a,b,w,k,z;
ll d[100005],p[100005];
map <pair<ll, ll> ,ll> mp;
priority_queue<ll> q;
vector<ll>v[100005];
void f (ll i)
{
	if (i!=1) f(p[i]);
	cout<<i<<' ';
}
int main ()
{
cin>>n>>m;
while (m--)
{
	cin>>a>>b>>w;
	v[a].push_back(b);
	v[b].push_back(a);
	mp[{a,b}]=w;
	mp[{b,a}]=w;
}

for (i=2; i<=n; i++)
d[i]=1e18;
q.push(1);

while (q.size())
{
	k=q.top();
	q.pop();
    for (i=0; i<v[k].size(); i++)
	{
		z=v[k][i];
		w=mp[{k,z}];
		if (d[k]+w<d[z]) d[z]=d[k]+w,p[z]=k,q.push(z);
	}
}

if (d[n]==1e18) return cout<<-1,0;
f(n);
	return 0;
}
