#include<bits/stdc++.h>
using namespace std;

pair<int,int>a[101];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i].first,a[i].second=i;
    sort(a+1,a+n+1);
    for(i=1; i<=n; i+=2)
        cout<<a[i].second<<" "<<a[n-i+1].second<<endl;

    return 0;
}

//int main()
//{
//    int i,j,need,sum=0,c=0;
//    int n,p;
//    cin>>n;
//    p=n/2;
//    int a[n+5],vis[n+5];
//    for(i=1; i<=n; i++)
//    {
//        cin>>a[i];
//        sum+=a[i];
//    }
//    need=sum/p;
//    for(i=1; i<=n; i++)
//    {
//        if(vis[i]==1)
//            continue;
//        for(j=i+1; j<=n; j++)
//        {
//            if(vis[j]==1)
//                continue;
//            if(a[i]+a[j]==need)
//            {
//                vis[j]=1;
//                cout<<i<<" "<<j<<endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}
