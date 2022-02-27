#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
using namespace std;

bool compare(pair<int, int>& v1, pair<int, int>& v2) {
	if (v1.first == v2.first)
		return v1.second < v2.second;
	else
		return v1.first < v2.first;
}

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> vn(N);

	for (int i = 0; i < N; i++) {
		int x, y;
		scanf_s("%d%d", &x, &y);
		vn[i] = make_pair(x, y);
	}

	sort(vn.begin(), vn.end(), compare);		//compare함수를 직접 구현할 수 있다.

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", vn[i].first, vn[i].second);
	}
	return 0;
}