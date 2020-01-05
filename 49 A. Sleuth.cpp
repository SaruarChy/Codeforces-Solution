# include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	for (int i = s.size() - 1; i >= 0; i--)
		if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')){
			if(s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y')
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			return 0;
		}
	return 0;
}
