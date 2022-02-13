#include <iostream>

using namespace std;

int main() {

	int A,B,C;
	cin >> A >> B >> C;

	double result;

	result = A / (C - B);

	if ((C - B) <= 0) {
		cout << "-1" << endl;
	}
	else {
		cout << ((int)result + 1) << endl;
	}
	
	return 0;
}