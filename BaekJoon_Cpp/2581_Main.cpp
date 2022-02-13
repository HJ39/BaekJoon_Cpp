#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;
	int sum = 0;
	vector<int> vPrime;


	for (int num = M; num <= N; num++) {

		int flag = true;
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				flag = false;
				break;
			}
		}
		if (flag && num != 1) {
			sum += num;
			vPrime.push_back(num);
		}
	}
	if (vPrime.size() > 0) {
		sort(vPrime.begin(), vPrime.end());
		cout << sum << endl << vPrime[0];
	}
	else
		cout << "-1";


	return 0;
}