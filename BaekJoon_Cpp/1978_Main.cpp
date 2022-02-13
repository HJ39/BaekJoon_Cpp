#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int num;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		bool flag = false;
		for (int i = 2; i < num; i++) {
			if (num % i ==0) {
				flag = true;
			}
			if (flag)
				break;
		}

		if (flag == false && num != 1)
			count++;
	}

	cout << count;



	return 0;
}