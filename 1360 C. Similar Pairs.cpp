//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t,n,a[101];
    cin>>t;
    while(t--)
    {
        int even = 0, odd = 0, dif = 0, diff = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        sort(a,a+n);
        for(int i=1; i<n; i++){
            dif = abs(a[i] - a[i-1]);
            if(dif == 1){
                diff++;
            }
        }

        if(even % 2 == 0 && odd % 2 == 0){
            cout<<"YES"<<endl;
        }
        else if(even % 2 == 1 && odd % 2 == 1){
            if(diff >= 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(even != odd){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

