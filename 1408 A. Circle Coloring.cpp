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
    ll t,n;
    int a[101],b[101],c[101];
    cin>>t;
    while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        int last,first;
        vector<int>v;
        queue<int>q;
        for(int i=0; i<n; i++){
            if(q.empty()){
                q.push(a[i]);
                first = a[i];
                continue;
            }
            last = q.front();
            q.pop();
            v.pb(last);
            if(i+1 == n){
                if(first != a[i] && last != a[i]){
                    q.push(a[i]);
                }
                else if(first != b[i] && last != b[i]){
                    q.push(b[i]);
                }
                else if(first != c[i] && last != c[i]){
                    q.push(c[i]);
                }
            }
            if(last != a[i]){
                q.push(a[i]);
            }
            else if(last != b[i]){
                q.push(b[i]);
            }
            else if(last != c[i]){
                q.push(c[i]);
            }

        }
        last = q.front();
        q.pop();
        v.pb(last);
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
