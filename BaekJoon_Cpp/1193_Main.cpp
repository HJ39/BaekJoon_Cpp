#include <iostream>
#include <map>
#include <cmath>

using namespace std;

/*
int main() {

	map<int, int> mapNumerator;	 //분자
	map<int, int> mapDenominator; //분모

	int inputNum;	
	cin >> inputNum;

	
	//An = (n^2 -n +2)/2 가 최대 숫자 1000000이 되는 n의 최댓값이 1414이다.
	
	for (int i = 0; i < 5000; i++) {
		if (((i + 1) % 2 )== 0) {			
			mapDenominator.insert(make_pair(i, (i + 1)));
			mapNumerator.insert(make_pair(i, 1));
		}
		else {
			mapDenominator.insert(make_pair(i,1));
			mapNumerator.insert(make_pair(i, (i + 1)));
		}		
	}
	
	int nearbyIndex;	//일반항 An 인덱스
	int nearbyCount;
	for (int i = 0; i < 10000000; i++) {
		double An = (pow(i+1, 2) - (i+1) + 2 )/2;
		
		if (An > inputNum) {
			nearbyIndex = i ;			
			break;
		}
		else {
			nearbyCount = An;
		}		
	}

	int Numeraotor = mapNumerator.find(nearbyIndex - 1)->second;
	int Denomiantor = mapDenominator.find(nearbyIndex - 1)->second;
	int Abs = inputNum - nearbyCount;	//입력숫자와 근처 최소숫자와의 차이

	for (int i = 0; i < Abs; i++) {
		if (nearbyIndex % 2 == 0) {
			Numeraotor++;
			Denomiantor--;
		}
		else {
			Numeraotor--;
			Denomiantor++;
		}
	}

	cout << Numeraotor << "/" << Denomiantor << endl;



	return 0;
}
*/

// 백준알고리즘 1등 풀이
int main() { 
	int n = 0, m = 1; 
	scanf_s("%d", &n); 
	while (n > m) {
		n -= m++;
		cout << n << "," << m << endl;
	}
	(m % 2 == 0) ? printf("%d/%d", n, m - n + 1) : printf("%d/%d", m - n + 1, n);
}