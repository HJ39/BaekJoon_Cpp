#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		double x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		
		double bigR = (r1 > r2) ? r1 : r2;
		double smallR = (r1 < r2) ? r1 : r2;

		if (dis == 0) {
			if (bigR == smallR)
				cout << "-1" << endl;
			else
				cout << "0" << endl;
		}
		else {
			if (bigR - smallR < dis && bigR + smallR > dis)
				cout << "2" << endl;
			else if (bigR + smallR == dis || bigR - smallR == dis)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}

	}
	return 0;
}