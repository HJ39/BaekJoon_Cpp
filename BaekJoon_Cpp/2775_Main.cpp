//#include <iostream>
//
//using namespace std;
//
//int recursive(int k, int n) {
//	/*
//	k층 n호 = (k-1층 n호) + (k층 n-1호)
//	*/
//
//	if (n == 1)		//모든 층수의 1호는 1명이 살아야한다.
//		return 1;
//	if (k == 0)		// 맨 아래층은 호수 인원대로 살고 있다.
//		return n;
//
//	return recursive(k - 1, n) + recursive(k, n - 1);
//}
//
//int main() {
//	int testCase;
//	int k;
//	int n;
//
//	cin >> testCase;
//	for (int i = 0; i < testCase; i++) {
//		cin >> k;
//		cin >> n;
//		cout << recursive(k, n) << endl;
//	}
//	return 0;
//}

#include <stdio.h>

void apt(int k, int n)
{
	int res = 1;

	for (int i = 0; i < k + 1; i++)
	{
		res *= n + i;
		res = res / (i + 1);
	}

	printf("%d\n", res);
}

int main(void)
{
	int T, k, n;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d%d", &k, &n);
		apt(k, n);
	}

	return 0;
}