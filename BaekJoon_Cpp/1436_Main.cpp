#include<iostream>
#include <string>
using namespace std;
/*
������ �� ����
666 1666 2666 3666 4666 5666 6660 6661 6662 6663 6664 6665 6666 6667 6668 6669 7666 8666 9666 10666 11666 12666 13666 14666 15666 16660 16661
�� ���ڵ鿡�� �˼� �ֵ��� 666�� ���Ե� ���� ũ�� �����̴�.
*/

int main() {
	int N;
	cin >> N;

	int count = 0;
	int result = 0;
	int a = 0;
	while (true) {
		string num = to_string(a);
		if (num.find("666") != std::string::npos)	//666�����ϴ� ��� 
			count++;
		if (count == N) {
			result = a;
			break;
		}
		a++;
	}

	cout << result;
	return 0;
}