#include<bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
#define vp vector<pii>

int adj[100001],dis[100001];

void printPath(int cur)
{
    if(adj[cur]==-2)
    {
        cout<<cur<<" ";
        return;
    }
    printPath(adj[cur]);
    cout<<cur<<" ";
}

struct node
{
    int operator()(const pii &p1,const pii &p2)
    {
        return p1.second<p2.second;
    }
};

int main()
{
    priority_queue<pii, vp, node> q;
    long long int n;
    cin>>n;
    vp g[n+1];
    long long int e,u,v,w;
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v>>w;
        g[u].push_back(pii(v,w));
        g[v].push_back(pii(u,w));
    }

    int source=1;
    int size;
    for(int i=1; i<=n; i++)
    {
        dis[i]=INT_MAX;
        adj[i]=-1;
    }
    dis[source]=0;
    adj[source]=-2;
    q.push(pii(source,dis[source]));
    while(!q.empty())
    {
        u=q.top().first;
        q.pop();
        size=g[u].size();
        for(int i=0;i<size;i++)
        {
            v=g[u][i].first;
            w=g[u][i].second;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                adj[v]=u;
                q.push(pii(v,dis[v]));
            }
        }
    }
    if(adj[n]==-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    printPath(n);
    return 0;
}
