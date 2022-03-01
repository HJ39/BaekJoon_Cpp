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
		vn[cnt] = i + 1;
		DFS(cnt + 1);		
	}
}
int main() {
	cin >> N >> M;
	DFS(0);
	return 0;
}