#include <iostream>

using namespace std;

int main() {

	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		int H, W, N;
		cin >> H >> W >> N;

		int floor = 0;
		int apartmentNum = 0;

		if (N % H == 0) {
			floor = H;
			apartmentNum = N / H;
		}
		else {
			floor = N % H;	//°í°´ Ãþ¼ö
			apartmentNum = N / H + 1;

		}

		if (apartmentNum >= 10)
			cout << floor << apartmentNum << endl;
		else
			cout << floor << "0" << apartmentNum << endl;
	}

	return 0;
}