#include <iostream>
#define KG_3 3	//3Kg ºÀÁö
#define KG_5 5	//5Kg ºÀÁö

using namespace std;
/*
Greedy Algorithm ÇØ°á ¹®Á¦
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