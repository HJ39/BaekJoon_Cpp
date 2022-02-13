#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;

	int disPerDay = A - B;
	double dis = (double)V -B;

	double result = dis / disPerDay;
	
	cout << (int)ceil(result);

	return 0;
}