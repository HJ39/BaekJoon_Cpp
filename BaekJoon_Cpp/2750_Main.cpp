#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int N;
	cin >> N;

	vector<int> vn;
	
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		vn.push_back(n);
	}

	sort(vn.begin(), vn.end());

	for (int i = 0; i < N; i++)
		cout << vn[i] << endl;
	
	return 0;
}