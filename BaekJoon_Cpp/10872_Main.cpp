#include <iostream>

using namespace std;

int recursive(int N) {
	if (N == 1)
		return 1;
	
	return recursive(N - 1) * N;
}

int main() {
	
	int N;
	cin >> N;
	if (N == 0) {
		cout << "1" << endl;
		return 0;
	}
	cout<<recursive(N)<<endl;

	return 0;
}