#include <iostream>
#include <algorithm>
#include <vector>

// cin,cout보다 scanf,printf가 더 속도가 빠르다

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
	sort(vn.begin(), vn.end());		//cpp STL sort함수는 시간 복잡도가 O(nlogn)이다
	for (int i = 0; i <N ; i++)
		printf("%d\n", vn[i]);
	return 0;
}