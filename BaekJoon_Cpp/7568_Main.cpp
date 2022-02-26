#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<pair<int, int>> pvn;

	for (int i = 0; i < N; i++) {
		int weight, height;
		cin >> weight >> height;
		pvn.push_back(make_pair(weight, height));
	}

	for (int i = 0; i < N; i++) {
		int count = 1;
		for (int j = 0; j < N; j++)
			if (pvn[i].first < pvn[j].first && pvn[i].second < pvn[j].second)
				count++;
		cout << count << " ";
	}
	return 0;
}