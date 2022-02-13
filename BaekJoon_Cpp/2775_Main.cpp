//#include <iostream>
//
//using namespace std;
//
//int recursive(int k, int n) {
//	/*
//	k�� nȣ = (k-1�� nȣ) + (k�� n-1ȣ)
//	*/
//
//	if (n == 1)		//��� ������ 1ȣ�� 1���� ��ƾ��Ѵ�.
//		return 1;
//	if (k == 0)		// �� �Ʒ����� ȣ�� �ο���� ��� �ִ�.
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