//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,x,a[100001];
    cin>>t;
    while(t--)
    {
        int M,m1,m2;
        ull sum = 0,sum1 = 0,sum2 = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum % x != 0){
            cout<<n<<endl;
        }
        else{
            m1 = m2 = n;
            sum1 = sum2 = sum;
            for(int i=n-1; i>=0; i--){
                if((sum1 - a[i])% x != 0 ){
                    m1--;
                    sum1 -= a[i];
                    break;
                }
                else{
                    sum1 -= a[i];
                    m1--;
                }
            }
            for(int i=0; i<n; i++){
                if((sum2 - a[i]) % x != 0){
                    m2--;
                    sum2 -= a[i];
                    break;
                }
                else{
                    sum2 -= a[i];
                    m2--;
                }
            }
            M = max(m1,m2);
            sum = max(sum1,sum2);
            if(sum % x != 0){
                cout<<M<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}
