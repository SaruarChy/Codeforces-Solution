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

    int n,m = 0;
    string s;
    set<char>t,c;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            for(int j=i+1; j<n; j++){
                if(s[j] >= 'A' && s[j] <= 'Z'){
                    i = j-1;
                    break;
                }
                else{
                    t.insert(s[j]);
                }
            }
            int l = t.size();
            int C = c.size();
            t.clear(),c.clear();
            m = max(m,max(l,C));
        }
        else{
            c.insert(s[i]);
        }
    }
    int C = c.size();
    if(C){
        cout<<max(m,C)<<endl;
    }
    else{
        cout<<m<<endl;
    }

    return 0;
}

