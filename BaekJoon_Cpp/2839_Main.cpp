#include <iostream>
#define KG_3 3	//3Kg ����
#define KG_5 5	//5Kg ����

using namespace std;
/*
Greedy Algorithm �ذ� ����
*/
int main() {
	
	int N;	
	cin >> N;

	int result = 0;
	while (N >= 0) {
		if (N % KG_5 == 0) {
			result += N / KG_5;
			cout << result;
			return 0;
		}
		N -= KG_3;
		result++;
	}
	cout << "-1";
	


	return 0;
}