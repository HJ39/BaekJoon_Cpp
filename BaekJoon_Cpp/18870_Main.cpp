#include <iostream>
#include <vector>
#include <algorithm>
//#define INIT ios::sync_with_stdio(false) , cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main() {	
	int N;
	scanf_s("%d", &N);
	vector<int> vn(N);
	for (int i = 0; i < N; i++)
		scanf_s("%d", &vn[i]);

	vector<int> tn;
	tn = vn;
	sort(tn.begin(), tn.end());			//�������� ����
	tn.erase(unique(tn.begin(), tn.end()), tn.end());
	// unique ���ӵ� �ߺ����� ������ ������ ��ȯ �� ������ ���� ù��° �ּҰ��� ��ȯ
	// erase �����Ⱚ ù��° ���� ������ ����

	vector<int>::iterator it;	
	vector<int>::iterator result;
	for (it = vn.begin(); it != vn.end(); it++) {
		result = lower_bound(tn.begin(), tn.end(), (*it));		
		printf("%d ", result - tn.begin());
	}	
	return 0;
}