#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int num;
	cin >> num;
	
	
	
	int count=0;
	for (int i = 2; i < 20000; i++) {
		if ((3 * pow(i,2) - 3 * i + 1) >= num) {	
			count = i;
			break;
		}
	}
	
	if (num == 1)
		cout << "1" << endl;
	else
		cout << count;
	return 0;
}