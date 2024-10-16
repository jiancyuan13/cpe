#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	long long int a;
	vector<long long int>b;
	while (cin >> a) {
		b.insert(lower_bound(b.begin(), b.end(), a), a);
		int size = b.size();
		if (size % 2 == 0) {
			cout << (b[size / 2] + b[size / 2 - 1]) / 2 << endl;
		}
		else {
			cout << b[size / 2 ] << endl;
		}
	}
}