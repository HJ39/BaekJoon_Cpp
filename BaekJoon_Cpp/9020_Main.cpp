#include <iostream>
#include <vector>
#define MAX 10001
using namespace std;

bool check(bool* parr,int i) {
	if (parr[i] == true)
		return true;
	else
		return false;
}

class Result {
	int mod1;
	int mod2;
public:
	Result(int a = 0, int b = 0) {		
		mod1 = a;
		mod2 = b;
	}
	int returnMod1() { return mod1; }
	int returnMod2() { return mod2; }
	void show() { cout << mod1 << " " << mod2 << endl; }

};

typedef vector<Result*> vvdis;

int main() {	
	bool* parr = new bool[MAX];
	//에라토스테네스의 체
	for (int i = 0; i < MAX; i++)
		parr[i] = true;
	parr[1] = false;
	parr[0] = false;

	for (int i = 2; i * i <= MAX; i++) {
		if (parr[i]) {
			for (int j = i * i; j < MAX; j += i) {
				parr[j] = false;
			}
		}
	}

	int n;
	int testCase;
	
	
	vvdis vdis;	//백터 객체
	
	cin >> testCase;
	for (int test = 0; test < testCase; test++) {
		cin >> n;
		int mod;
		for (int i = n; i >=n/2; i--) {
			if (check(parr, i)) {
				mod = n - i;
				if (check(parr, mod)) {	
					//cout << mod << "," << i << endl;
					vdis.push_back(new Result(mod,i));
				}
			}
		}
		
		int min = MAX;		
		for (int i = 0; i < vdis.size(); i++) {
			if (abs(vdis[i]->returnMod2() - vdis[i]->returnMod1()) < min)
				min = abs(vdis[i]->returnMod2() - vdis[i]->returnMod1());
		}
		
		for (int i = 0; i < vdis.size(); i++) {
			if (abs(vdis[i]->returnMod2() - vdis[i]->returnMod1()) == min) {
				vdis[i]->show();
				break;
			}
		}
		vdis.clear();
	}
	return 0;
}