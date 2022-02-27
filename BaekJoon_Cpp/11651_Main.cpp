#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> 
using namespace std;

bool compare(pair<int, int>& v1, pair<int, int>& v2) {
	if (v1.second == v2.second)
		return v1.first < v2.first;
	else
		return v1.second < v2.second;
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

	/*
	 백준으로 실행시 printf,scanf보다 속도가 느리게 나와 시간초과 발생
	cin.tie(NULL);
	cout.tie(NULL);	
	ios::sync_with_stdio(false);

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		vn[i] = make_pair(x, y);
	}

	sort(vn.begin(), vn.end(), compare);		//compare함수를 직접 구현할 수 있다.

	for (int i = 0; i < N; i++) {
		cout<<vn[i].first<<" "<<vn[i].second<<endl;
	}
	*/
	return 0;
}