#include <iostream>

using namespace std;

int main() {

	bool* arr = new bool[246913];
	for (int i = 0; i <= 246912; i++)
		arr[i] = true;
	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i * i < 246913; i++) {
		if (arr[i]) {
			for (int j = i * i; j < 246913; j += i) {
				arr[j] = false;
			}
		}
	}

	while (true) {
		int N;
		cin >> N;
		if (N == 0)
			return 0;
		int count = 0;
		for (int i = N+1; i <= 2 * N; i++)
			if (arr[i])
				count++;

		printf("%d\n", count);

	}

	delete[] arr;
	return 0;
}