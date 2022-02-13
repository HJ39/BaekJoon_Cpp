#include <iostream>

using namespace std;

int main() {

	string str;
	cin >> str;

	int alphabet[26] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			alphabet[(str[i] - 65)]++;
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			alphabet[(str[i] - 97)]++;
		}
	}

	int maxCount = 0;
	int Index = 0;
	
	for (int i = 0; i < 26; i++) {
		if (maxCount < alphabet[i]) {
			maxCount = alphabet[i];
			Index = i;
		}
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (maxCount == alphabet[i]) {
			count++;			
		}
	}

	if (count >1) {
		cout << "?" << endl;
	}
	else {
		char ch;
		ch = Index + 65;
		cout << ch << endl;
	}




	return 0;
}