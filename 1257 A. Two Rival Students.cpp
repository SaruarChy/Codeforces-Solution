#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,Xswap,posA,posB;
    while(t--)
    {
        cin>>n>>Xswap>>posA>>posB;
        cout<<min(n-1,abs(posB-posA)+Xswap)<<endl;
//        if(posA<posB)
//            swap(posA,posB);
//        if(Xswap==0)
//        {
//            cout<<posA-posB<<endl;
//            continue;
//        }
//        if(posA!=n || posB!=n-(n-1))
//        {
//            while(Xswap!=0)
//            {
//                if(posA==n)
//                posB--;
//                else
//                    posA++;
//                Xswap--;
//            }
//        }
//        cout<<posA-posB<<endl;
    }
    return 0;
}
