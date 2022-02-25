#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		string strN = to_string(i);
		int totalNum = 0;
		
		for (int j = 0; j < strN.length(); j++) 			
			totalNum += strN[j] - '0';		
		totalNum += i;

		if (totalNum == n) {
			cout << i;
			break;
		}
		if (i == n) {
			cout << "0";
			return 0;
		}
	}
	return 0;
}