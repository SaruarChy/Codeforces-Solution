#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);

    ll t,n,a[1001];
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            a[i] = s[i] - '0';
        }
        if(a[0] == 1 || a[n-1] == 1){
            cout<<n*2<<endl;
        }
        else{
            int one = 0,leftVisit = 0,rightVisit = 0,ans = 0;
            for(int i=0; i<n; i++){
                if(a[i] == 1){
                    one = 1;
                    leftVisit = i;
                    break;
                }
            }
            int i = -1;
            for(int j=n-1; j>=0; j--){
                i++;
                if(a[j] == 1){
                    one = 1;
                    rightVisit = i;
                    break;
                }
            }
            //cout<<leftVisit<<" "<<rightVisit<<endl;
            ans = 2 * (n -  min(leftVisit,rightVisit));
            if(one == 0){
                cout<<n<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}
