#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	string N;
	cin >> N;
	vector<int> vn(N.length());
	
	for (int i = 0; i < N.length(); i++) {
		int n = N[i]-'0';
		vn[i] = n;
	}
	sort(vn.begin(), vn.end(), greater<>());

	for (int i = 0; i < N.length(); i++)
		printf("%d", vn[i]);
	return 0;
}