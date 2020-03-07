#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    int a[1050];
    cin>>t;
    while(t--)
    {
        //float sum=0,avg=0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            //sum+=a[i];
        }
        //avg=sum;
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(a[0]<=m)
                {
                    if(a[0]+a[j]<=m)
                    {
                        a[0]+=a[j];
                        a[j]-=a[j];
                    }
                    else if(m-a[0])
                    {
                        a[0]+=(m-a[0]);
                        //a[j]-=a[j];
                    }
                }
                else if(a[0]==m)
                    break;
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}
/* After contest solution

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,a,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>a;
            sum+=a;
        }
        cout<<min(m,sum)<<endl;
    }
    return 0;
}
*/
