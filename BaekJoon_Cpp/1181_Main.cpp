#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

bool compare(string& str1, string& str2) {
	if (str1.length() == str2.length())
		return str1 < str2;
	else
		return str1.length() < str2.length();
}

int main() {
	int N;
	cin >> N;
	vector<string> vstr;

	/*for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		vstr.push_back(s);
	}
	sort(vstr.begin(), vstr.end(), compare);
	
	int count = 0;
	int size = vstr.size();
	vector<string>::iterator it;
	for (int i = 0; i <vstr.size(); i++) {
		count = 0;
		for (int j = 0; j < vstr.size(); j++) {
			if (vstr[i].compare(vstr[j]) == 0)
				count++;
		}
		if (count > 1) {			
			it = find(vstr.begin(), vstr.end(), vstr[i]);
			if(it != vstr.end())
				vstr.erase(it,it+count-1);
			vstr.resize(size - count + 1);
			i--;
		}
	}*/
	
	cin.tie(0);
	ios::sync_with_stdio(false);

	
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (find(vstr.begin(), vstr.end(), s) == vstr.end())		//입력 받을 때 중복제거하여 벡터에 입력한다.
			vstr.push_back(s);
	}
	sort(vstr.begin(), vstr.end(), compare);
	
	for (int i = 0; i < vstr.size(); i++)
		cout << vstr[i] << '\n';

	return 0;
}