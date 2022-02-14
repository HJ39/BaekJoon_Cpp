#include <iostream>
#include <cmath>
#define PI 3.14159265359
using namespace std;

int main() {
	int R;
	cin >> R;
	double taxi = 2 * pow(R, 2);
	double euclid = pow(R, 2) * PI;
	printf("%.6f\n", euclid);
	printf("%.6f\n", taxi);
	return 0;
}