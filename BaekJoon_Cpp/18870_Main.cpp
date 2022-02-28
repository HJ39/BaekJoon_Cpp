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
	sort(tn.begin(), tn.end());			//오름차순 정렬
	tn.erase(unique(tn.begin(), tn.end()), tn.end());
	// unique 연속된 중복값을 쓰레기 값으로 변환 후 쓰레기 값의 첫번째 주소값을 반환
	// erase 쓰레기값 첫번째 부터 끝까지 제거

	vector<int>::iterator it;	
	vector<int>::iterator result;
	for (it = vn.begin(); it != vn.end(); it++) {
		result = lower_bound(tn.begin(), tn.end(), (*it));		
		printf("%d ", result - tn.begin());
	}	
	return 0;
}