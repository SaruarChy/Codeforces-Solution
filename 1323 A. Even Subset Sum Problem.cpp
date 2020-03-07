#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a[105],tag;
    cin>>t;
    while(t--)
    {
        tag=0;
        cin>>n;
        for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(n==1&&a[1]%2==1)
			cout<<-1<<endl;
		else
		{
			if(a[1]%2==0)
			{
				cout<<1<<endl<<1<<endl;
			}
			else if(a[2]%2==0)
			{
				cout<<1<<endl<<2<<endl;
			}
			else
			{
				cout<<2<<endl<<1<<" "<<2<<endl;
			}
		}
    }
    return 0;
}
