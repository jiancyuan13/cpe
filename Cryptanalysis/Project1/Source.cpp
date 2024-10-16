#include<iostream>
using namespace std;
int main(void) {
	int n,val=0;
	int c[91] = {};
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
				val++;
				c[toupper(s[i])]++;
			}
		}
		for (int j = val; j >= 1; j--) {
			for (int k = 'A'; k <= 'Z'; k++) {
				if (c[k] == j) {
					cout << char(k) << " " << c[k] << endl;
				}
			}
		}
	}
}