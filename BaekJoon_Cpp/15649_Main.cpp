#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int N, M, cnt;
vector<int> vn(MAX);
bool check[MAX];

void DFS(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			printf("%d ", vn[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			check[i] = true;
			vn[cnt] = i + 1;
			DFS(cnt + 1);
			check[i] = false;
		}
	}
}
int main() {
	cin >> N >> M;
	DFS(0);
	return 0;
}