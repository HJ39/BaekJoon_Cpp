#include <iostream>

using namespace std;

int main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int repeatCount = 0;
		int count = 0;
		string str = "";
		char resultStr[161] = "";	//�����Ⱚ ����

		cin >> repeatCount;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < repeatCount; k++) {
				resultStr[j + count] = str[j];
				count++;
			}
			count--;
		}

		cout << resultStr << endl;

	}
	return 0;
}