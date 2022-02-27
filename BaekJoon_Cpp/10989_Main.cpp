#include <iostream>
#include <vector>

#define MAXNUM 10001
using namespace std;
int main() {
	// counting sort 알고리즘
	int N;
	cin >> N;
	
	vector<int> counting(MAXNUM);	

	for (int i = 0; i < N; i++) {
		int n;
		scanf_s("%d", &n);
		counting[n]++;
	}
	
	// 저장하지 않고 바로 출력해야한다.
	int i = 0;
	while (i < MAXNUM) {
		if (counting[i] > 0) {
			printf("%d\n", i);			
			counting[i]--;
		}
		else
			i++;
	}
	
	/*
	int* arr = new int[N];
	int* result = new int[N];

		//일반적인 counting sort 방법
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
		counting[arr[i] - 1]++;

	for (int i = 0; i < N; i++)
		counting[i + 1] += counting[i];


	for (int i = 0; i < N;i++) {
		result[counting[arr[i]-1] - 1] = arr[i];
		counting[arr[i]-1]--;
	}

	for (int i = 0; i < N; i++)
		cout << result[i] << endl;

	*/
	return 0;
}