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
    ll t,n;
    cin>>t;
    while(t--){
        string s,b;
        cin>>s;
        n = s.length();

        char start = s[0],enD = s[n-1];
        if(start == enD){
            cout<<"NO"<<endl;
            continue;
        }

        int f = 0,snd = 0;
        for(int i=0; i<n; i++){
            if(s[i] == start){
                b += '(';
                f++;
            }
            else if(s[i] == enD){
                 b += ')';
                 snd++;
            }
            else{
                b += '_';
            }
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(b[i] == '_'){
                if(f > snd){
                    b[i] = ')';
                    cnt++;
                }
                else if(f < snd){
                    b[i] = '(';
                    cnt++;
                }
            }
        }
        if(f > snd)snd += cnt;
        else if(f < snd)f += cnt;
        else if(f == snd && cnt != 0){
            cout<<"NO"<<endl;
            continue;
        }

        //cout<<b<<endl;
        if(f == snd && f+snd < n)
            cout<<"NO"<<endl;
        else{
            int fst = 0,secnd = 0;
            for(int i=0; i<n; i++){
                if(b[i] == '(')fst++;
                else{
                    secnd++;
                    if(fst){
                        fst--,secnd--;
                    }
                }
            }
            if(fst == 0 && secnd == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
