#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define mod 1000000007
int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}
bool compare(int a, int b) {
    return a > b;
}
int32_t main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[3][n];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vector<int>v;
        for (int i = 0; i < n - 1; i++) {
            int max_ele = max(a[0][i], max(a[2][i], a[1][i]));
            int min_ele = min(a[0][i], min(a[2][i], a[1][i]));
            if (i == 0) {
                v.push_back(max_ele);
                continue;
            }
            else if (i % 2 == 0) {
                if (max_ele != v[i - 1]) {
                    v.push_back(max_ele);
                }
                else {
                    v.push_back(min_ele);
                }
            }
            else {
                if (min_ele != v[i - 1]) {
                    v.push_back(min_ele);
                }
                else {
                    v.push_back(max_ele);
                }
            }
        }
        int op1 = max(a[0][n - 1], max(a[2][n - 1], a[1][n - 1]));
        int op2 = min(a[0][n - 1], min(a[2][n - 1], a[1][n - 1]));
        if (op1 != v[0] and op1 != v[n - 2]) {
            v.push_back(op1);
        }
        else if (op2 != v[0] and op2 != v[n - 2]) {
            v.push_back(op2);
        }
        else {
            for (int i = 0; i < 3; i++) {
                if (a[i][n - 1] != op1 and a[i][n - 1] != op2) {
                    v.push_back(a[i][n - 1]);
                }
            }
        }
        for (auto p : v) {
            cout << p << " ";
        }
        cout << endl;
    }
}
