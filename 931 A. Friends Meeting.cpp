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
    int a,b;
    cin>>a>>b;
    int i = 1,j = 1, d1 = 0,d2 = 0,c = 0;
    if(a > b){
        swap(a,b);
    }
    int dif = b - a;
    while(a != b){
        if(dif % 2 == 0){
            a++;
            b--;
            c += (i * 2);
            i++;
        }
        else if(dif % 2 == 1){
            if(d1 < (dif/2)+1){
                d1++;
                a++;
                c += i;
                i++;
            }
            if(d2 < dif/2){
                d2++;
                b--;
                c += j;
                j++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}

