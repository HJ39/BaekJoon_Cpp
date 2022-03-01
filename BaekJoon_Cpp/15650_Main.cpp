#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int N, M, cnt;
vector<int> vn;
bool check[MAX];

void DFS(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < vn.size(); i++)
			printf("%d ", vn[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			if (cnt > 0 && vn[cnt - 1] > i + 1)
				continue;			
			check[i] = true;
			vn.push_back(i + 1);
			DFS(cnt + 1);
			vn.pop_back();
			check[i] = false;
		}
	}
}
int main() {
	cin >> N >> M;
	DFS(0);
	return 0;
}