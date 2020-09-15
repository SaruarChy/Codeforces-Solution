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
    ll n,f = 0,l = 0;
    string s;
    cin>>n>>s;
    int flag = 0;
    stack<char>st;
    for(ll i=0; i<n; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(!st.empty() && st.top() == ')' && !flag){
            st.pop();
            flag = 1;
        }

    }
    if(flag == 0 && st.size() == 0){
        cout<<"YES"<<endl;
    }
    else if(flag == 1 && st.size() == 1 && st.top() == '('){
            cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

