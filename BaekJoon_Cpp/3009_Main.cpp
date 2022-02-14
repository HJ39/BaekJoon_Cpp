#include <iostream>

using namespace std;


int main() {
	int x, y;

	int arrX[3];
	int arrY[3];

	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		arrX[i] = x;
		arrY[i] = y;
	}

	for (int i = 0; i < 3; i++) {
		int countX = 0;
		int countY = 0;
		for (int j = 0; j < 3; j++) {
			if (arrX[i] == arrX[j])
				countX++;
			if (arrY[i] == arrY[j])
				countY++;
		}

		if (countX == 1)
			x = arrX[i];
		if (countY == 1)
			y = arrY[i];
	}
	cout << x << " " << y << endl;

	
	return 0;
}
