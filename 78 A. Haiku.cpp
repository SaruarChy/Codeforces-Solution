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

    int n = 3, first = 0,second = 0, third = 0;


    for(int j=1; j<=n; j++){
        string s;
        getline(cin,s);
        for(ll i=0; i<s.length(); i++){
            if(isalpha(s[i])){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    if(j == 1){
                        first++;
                    }
                    else if(j == 2){
                        second++;
                    }
                    else if(j == 3){
                        third++;
                    }
                }
            }
        }
    }
    if( (first == 5 && second == 7) && (third == 5) ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;

    return 0;
}

