#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int* pn = new int[n];
	for (int i = 0; i < n; i++)
		cin >> pn[i];
	vector<int> vn;

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (pn[i] + pn[j] + pn[k] <= m) {
					vn.push_back(pn[i] + pn[j] + pn[k]);
				}
			}
		}
	}
	int smallAbs = abs(vn[0] - m);
	for (int i = 0; i < vn.size(); i++) {
		smallAbs = min(smallAbs, abs(vn[i] - m));
	}
	cout << m - smallAbs;
	return 0;
}