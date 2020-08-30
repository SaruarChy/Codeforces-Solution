//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int T,n,a[101];
    cin>>T;
    while(T--){
        cin>>n;
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        sort(a,a+n,greater<int>());
        int sub = sum - a[0];
        if(a[0] > sub){
            cout<<"T"<<endl;
        }
        else{
            if(sum % 2 == 1){
                cout<<"T"<<endl;
            }
            else{
                cout<<"HL"<<endl;
            }
        }
    }

    return 0;
}

