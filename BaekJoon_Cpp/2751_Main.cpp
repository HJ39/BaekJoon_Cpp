#include <iostream>
#include <algorithm>
#include <vector>

// cin,cout���� scanf,printf�� �� �ӵ��� ������

using namespace std;
int main() {
	int N;
	cin >> N;	
	vector<int> vn;	
	for (int i = 0; i < N; i++) {
		int n;
		scanf_s("%d", &n);	
		vn.push_back(n);
	}
	sort(vn.begin(), vn.end());		//cpp STL sort�Լ��� �ð� ���⵵�� O(nlogn)�̴�
	for (int i = 0; i <N ; i++)
		printf("%d\n", vn[i]);
	return 0;
}