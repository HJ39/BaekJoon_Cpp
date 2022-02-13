#include <iostream>
#define ASCIICODE_NUM_SMALL_a 97
using namespace std;

int main() {

	int alphabet[26];
	string word;
	cin >> word;

	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	
	for (int i = 0; i < word.length(); i++) {
		char ch = word[i];
		int ch_ascii_num = ch - ASCIICODE_NUM_SMALL_a;
		
		if(alphabet[ch_ascii_num] == -1)
			alphabet[ch_ascii_num] = i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}

	return 0;
}