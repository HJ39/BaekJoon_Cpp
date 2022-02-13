#include <iostream>

using namespace std;

int main() {

	int M, N;
	
	cin >> M >> N;
	
	bool* parr = new bool [N+1];	

	//�����佺�׳׽��� ü

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
			printf("%d\n", i);		//cout���� ��½� �ӵ��� ���� �ð� �ʰ� �߻�
	}


	
	delete[] parr;
	return 0;
}