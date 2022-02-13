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
		int sqrtNum = sqrt(totalDis);	// �ִ�ӵ�
		int count = 0;

		/*
			�ִ� �ӵ� k�� �̵��ϱ� ���ؼ��� �� �� �Ÿ��� 1���� (k-1)���� ���� 2�谡 �ʿ��ϴ�
			k �ӵ� �̵����� -> 2*(1+...+(k-1))
		*/
		for (int i = 1; i < sqrtNum; i++) {		
			totalDis -= i * 2;
			count = count + 2;
		}

		// �ִ�ӵ� �̵� �Ÿ��� ���ش�.
		totalDis -= sqrtNum;
		count++;

		// �ִ� �ӵ��� �̵��� �� ���� �Ÿ��� ó�� �ϴ� �κ�
		//�ּ����� Ƚ���� �̵��϶�� �����Ƿ�  ���� �Ÿ��� �ִ�ӵ��� �������ָ� ������ �ִ�ӵ��� �߰�  �̵������� �Ÿ��� ���´�.
		count += totalDis / sqrtNum;	
		
		if (totalDis % sqrtNum != 0)	// �ִ� �ӵ��� ���� �Ÿ��� �̵��� �� �߰� ������ �����ִ� ��� �ѹ��� �߰������� �̵��ϸ� �ȴ�.
			count++;

		cout << count << endl;

	}
	return 0;
}