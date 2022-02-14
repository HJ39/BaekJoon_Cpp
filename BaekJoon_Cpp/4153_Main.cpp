#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	while (true) {
		int x, y, z;
		int arr[3];
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0)
			return 0;
		arr[0] = x; arr[1] = y; arr[2] = z;
		sort(arr, arr + 3);
		x = arr[0]; y = arr[1]; z = arr[2];
		if((int)(pow(z,2) == (int)(pow(x,2)+(int)(pow(y,2)))))
			cout<<"right"<<endl;
		else
			cout<<"wrong"<<endl;
	}
	return 0;
}