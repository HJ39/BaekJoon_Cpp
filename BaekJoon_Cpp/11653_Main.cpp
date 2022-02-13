#include <iostream>

using namespace std;

int main() {
	int N;
	int num = 2;

	cin >> N;
	if (N == 1)
		return 0;

	while (num<=N) {
		if (N % num == 0) {
			N = N / num;
			cout << num << endl;
		}
		else {
			num++;
		}
	}
	return 0;
}