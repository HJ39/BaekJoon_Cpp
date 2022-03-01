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

	/*	�˰��� �˾Ƶα�
	int n;
	cin >> n;
	vector<pair<int, int>> arr(n);
	vector<int> result(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr.begin(), arr.end(), less<pair<int, int>>());
	//���� �̸� ���α�
	int pre = arr[0].first;
	int Count = 0;
	for (int i = 0; i < n; i++)
	{		
		if (pre != arr[i].first) {			
			Count++;
			pre = arr[i].first;
		}
		result[arr[i].second] = Count;
	}
	//�Է¼������ ������Ǿ� ����
	for (int i = 0; i < n; i++)
	{
		cout << result[i] << " ";
	}	
	*/


	return 0;
}