#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int testCase;

	cin >> testCase;
	for (int t = 0; t < testCase; t++) {
		int start, end;

		cin >> start >> end;

		int totalDis = end - start;
		int sqrtNum = sqrt(totalDis);	// 최대속도
		int count = 0;

		/*
			최대 속도 k로 이동하기 위해서는 앞 뒤 거리가 1부터 (k-1)까지 합의 2배가 필요하다
			k 속도 이동조건 -> 2*(1+...+(k-1))
		*/
		for (int i = 1; i < sqrtNum; i++) {		
			totalDis -= i * 2;
			count = count + 2;
		}

		// 최대속도 이동 거리를 뺴준다.
		totalDis -= sqrtNum;
		count++;

		// 최대 속도로 이동한 후 남은 거리들 처리 하는 부분
		//최소한의 횟수로 이동하라고 했으므로  남은 거리로 최대속도를 나누어주면 몫으로 최대속도로 추가  이동가능한 거리가 나온다.
		count += totalDis / sqrtNum;	
		
		if (totalDis % sqrtNum != 0)	// 최대 속도로 남은 거리를 이동한 후 추가 적으로 남아있는 경우 한번만 추가적으로 이동하면 된다.
			count++;

		cout << count << endl;

	}
	return 0;
}