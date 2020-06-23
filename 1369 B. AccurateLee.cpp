//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;

        int temp = n;
        while(1){
            for(int i=n-2; i>=0; i--){
                if((s[i] == '1' && s[i+1] == '0') ){
                    if(s[i-1] == '1' && s[i+2] == '1'){
                        s.erase(s.begin()+i);
                        temp--;
                        break;
                    }
                    else if(s[i+2] == '0'){
                        s.erase(s.begin()+i+1);
                        temp--;;
                        break;
                    }
                    else if(s[i-1] == '1'){
                        s.erase(s.begin()+i);
                        temp--;;
                        break;
                    }
                    else{
                        s.erase(s.begin()+i);
                        temp--;;
                        break;
                    }
                }
            }
            if(n != temp+1)
                break;
            else{
                n--;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}

