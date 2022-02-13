#include <iostream>

using namespace std;

int main() {

	int M, N;
	
	cin >> M >> N;
	
	bool* parr = new bool [N+1];	

	//에라토스테네스의 체

	for (int i = 1; i <= N; i++) {
		parr[i] = false;
	}
	parr[1] = true;

	for (int i = 2; i*i <= N; i++) {
		if (!parr[i]) {
			for (int j = i * i; j <= N; j += i) {
				parr[j] = true;
			}
		}
	}

	for (int i = M; i <= N; i++) {
		if (!parr[i])			
			printf("%d\n", i);		//cout으로 출력시 속도가 느려 시간 초과 발생
	}


	
	delete[] parr;
	return 0;
}