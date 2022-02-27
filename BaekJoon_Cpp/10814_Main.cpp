#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2) {
	return (p1.first < p2.first);		
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<pair<int, string>> vn(N);

	for (int i = 0; i < N; i++) 
		cin >> vn[i].first >> vn[i].second;

	stable_sort(vn.begin(), vn.end(),compare);

	for (int i = 0; i < N; i++)
		cout << vn[i].first << " " << vn[i].second << '\n';

	return 0;
}