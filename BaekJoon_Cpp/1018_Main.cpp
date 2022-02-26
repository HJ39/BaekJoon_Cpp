#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> result;

	char** ppChess = new char* [N];
	for (int i = 0; i < N; i++)
		ppChess[i] = new char[M];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> ppChess[i][j];	//체스판 입력

	char pattern1[] = { 'B','W','B','W','B','W','B','W' };
	char pattern2[] = { 'W','B','W','B','W','B','W','B' };

	int startX = 0;
	int endX = 8;
	int startY = 0;
	int endY = 8;

	while (true) {
		int count = 0;
		int pattern1Repeat = 0;
		int pattern2Repeat = 0;

		//규칙 시작이 B인경우
		for (int i = startX; i < endX; i++) {
			int repeat = 0;
			for (int j = startY; j < endY; j++) {
				if (i % 2 == 0) {		//0,2,4,6,8 행 인경우
					if (ppChess[i][j] != pattern1[repeat++])		
						pattern1Repeat++;
				}
				else {	//1,3,5,7 행 인경우
					if (ppChess[i][j] != pattern2[repeat++])
						pattern1Repeat++;
				}
			}
		}

		// 규칙이 W로 시작하는 경우
		for (int i = startX; i < endX; i++) {
			int repeat = 0;
			for (int j = startY; j < endY; j++) {
				if (i % 2 == 0) {	//0,2,4,6,8 행 인경우
					if (ppChess[i][j] != pattern2[repeat++])
						pattern2Repeat++;
				}
				else {		//1,3,5,7 행 인경우
					if (ppChess[i][j] != pattern1[repeat++])
						pattern2Repeat++;
				}
			}
		}
		// 두가지 경우의 최소값들을 비교하여 가장 작은 경우를 result에 저장
		count = min(pattern1Repeat, pattern2Repeat);
		result.push_back(count);

		if (endX == N && endY == M)
			break;
		//y가 오른쪽 끝까지 도달한 경우 x를 한칸 아래로 내리고 y구간을 처음으로 돌림
		if (endY > M - 1) {		
			startY = 0;
			endY = 8;
			startX++;
			endX++;
		}	//y가 오른쪽끝까지 도달하지 않은 경우
		else if (endY <= M - 1) {
			startY++;
			endY++;
		}
	}

	sort(result.begin(), result.end());
	cout << result[0];

	for (int i = 0; i < N; i++)
		delete[] ppChess[i];
	delete[] ppChess;
	return 0;
}