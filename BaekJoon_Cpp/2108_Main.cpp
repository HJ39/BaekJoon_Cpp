#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;

	int avg = 0;	//������
	int median = 0; //�߾Ӱ�	
	int mode = 0;	//�ֺ�
	int range = 0;	//����

	vector<int> vn(N);
	vector<int> vPlusMode(4001);
	vector<int> vMinusMode(4001);

	double sum = 0;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		sum += n;
		vn[i] = n;
		if (n >= 0)
			vPlusMode[n]++;
		else
			vMinusMode[0-n]++;
	}

	sort(vn.begin(), vn.end());
	
	median = vn[N / 2];		//�߾Ӱ�
	avg = round(sum / N);	//������
	range = vn[N - 1] - vn[0];	//����
	
	int plusMax = 0;	//�÷��� ���� �ֺ�
	int plus = 0;		//�ֺ��� �ε���
	int minusMax = 0;	//���̳ʽ� ���� �ֺ�
	int minus = 0;		//�ֺ��� �ε���
	for (int i = 0; i < 4001; i++) {
		if (plusMax < vPlusMode[i]) {
			plus = i;
			plusMax = vPlusMode[i];
		}
		if (minusMax < vMinusMode[i]) {
			minus = i;
			minusMax = vMinusMode[i];
		}
	}
	int maxIndex = (minusMax >= plusMax) ? (minus) : plus;
	vector<int> vfreMinus;
	vector<int> vfrePlus;
	
	for (int i = 0; i < 4001; i++) {
		if (minusMax == plusMax) {
			if (vPlusMode[plus] == vPlusMode[i])
				vfrePlus.push_back(i);
			if (vMinusMode[minus] == vMinusMode[i])
				vfreMinus.push_back(i);
		}
		else if (minusMax > plusMax) {
			if (vMinusMode[minus] == vMinusMode[i])
				vfreMinus.push_back(i);
		}
		else {
			if (vPlusMode[plus] == vPlusMode[i])
				vfrePlus.push_back(i);
		}		
	}
	if (!vfreMinus.empty())
		sort(vfreMinus.begin(), vfreMinus.end(), greater<>());
	if (!vfrePlus.empty())
		sort(vfrePlus.begin(), vfrePlus.end());
	
	
	
	if (vfreMinus.size() == 1 && vfrePlus.size() >= 1) 
		mode = vfrePlus[0];	
	else if (vfreMinus.size() > 1)
		mode = 0 - vfreMinus[1];
	else if (vfreMinus.size() == 1)
		mode = 0 - vfreMinus[0];
	else if (vfrePlus.size() > 1)
		mode = vfrePlus[1];
	else
		mode = vfrePlus[0];
	
	
	printf("%d\n",avg);
	printf("%d\n%d\n%d\n", median,mode ,range);	
	return 0;
}