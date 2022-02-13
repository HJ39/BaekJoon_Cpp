#include <iostream>
#define ASCIICODE_NUM_ZERO 48
using namespace std;

int main() {

	int length;
	cin >> length;
	
	string a;
	cin >> a;
	

	char* str = new char[length];
	for (int i = 0; i < length; i++) 
		str[i] = a[i];
	
	long sum = 0;
	for (int i = 0; i <length; i++) {
		sum += str[i]- ASCIICODE_NUM_ZERO;
	}
	cout << sum;


	return 0;
}