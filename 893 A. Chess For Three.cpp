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

    int n, a[101];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n == 1){
        if(a[0] == 3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        return 0;
    }
    if(a[0] == 3){
        cout<<"NO"<<endl;
        return 0;
    }

    bool flag = false;
    int win = a[0];
    int spect = 3;
    for(int i=1; i<n; i++){
        int sum = 6 - (a[i-1] + spect);
        spect = sum;
        if(sum == a[i]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}

