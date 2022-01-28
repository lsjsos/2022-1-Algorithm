#include <iostream>
#include <string>
#include <deque>
#include <sstream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, size;
	string s, arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		deque<string> DQ;
		cin >> s >> size >> arr;
		arr.erase(arr.begin()); // [ 제거
		arr.pop_back(); // ]제거
		istringstream ss(arr);
		string token;
		while (getline(ss, token, ',')) {
			DQ.push_back(token);
		}
		bool isWrong = false; 
		bool flip = false; // 뒤집힘 유무
		for (char a : s) {
			if (a == 'R') {
				flip = !flip;
			}
			else {
				if (DQ.empty()) {
					isWrong = true;
					break;
				}
				if (flip) DQ.pop_back();
				else DQ.pop_front();
			}
		}

		if (isWrong) { //배열이 비어있는데 D명령을 했을경우
			cout << "error\n";
		}
		else if (DQ.empty()) {//배열이 비어있지만 D명령을 하지 않은경우
			cout << "[]\n";
		}
		else { // 배열이 비어있지 않은 경우
			if (flip) {
				cout << "[";
				for (int i = DQ.size() - 1; i > 0; i--) {
					cout << DQ[i] << ",";
				}
				cout << DQ.front() << "]\n";
			}
			else {
				cout << "[";
				for (int i = 0; i < DQ.size() - 1; i++) {
					cout << DQ[i] << ",";
				}
				cout << DQ.back() << "]\n";
			}
		}
	}
	return 0;
}