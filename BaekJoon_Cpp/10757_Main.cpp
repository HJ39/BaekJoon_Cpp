#include <iostream>
#include <vector>

using namespace std;

int main() {

	string A, B;
	cin >> A >> B;

	vector<int> vA;
	vector<int> vB;
	vector<int>::iterator it;
	int maxLength = (A.length() > B.length()) ? A.length() : B.length();

	for (int i = 0; i < A.length(); i++)
		vA.push_back((int)A[i] - '0');
	for (int i = 0; i < B.length(); i++)
		vB.push_back((int)B[i] - '0');
	
	
	if (A.length() > B.length()) {
		it = vB.begin();
		vB.insert(it, A.length() - B.length(),0);
	}
	else if(B.length() > A.length()){
		it = vA.begin();
		vA.insert(it, B.length() - A.length(), 0);
	}

	vector<int> vResult(maxLength);
	int sum = 0;
	int over = 0;	//µ¡¼À°á°ú°¡ 10ÀÌ ³ÑÀ»°æ¿ì

	int i = maxLength-1;
	while( i>=0){
		sum = vB[i] + vA[i] + over;
		over = 0;	//µ¡¼ÀÈÄ ÃÊ±âÈ­
		if (sum >= 10) {
			sum -= 10;
			over++;
		}		
		vResult[i] = sum;
		if (i == 0 && over > 0) {
			it = vResult.begin();
			vResult.insert(it, over);
		}
		i--;
	}
	
	
	for (int i = 0; i < vResult.size(); i++)
		cout <<vResult[i];

	return 0;
}