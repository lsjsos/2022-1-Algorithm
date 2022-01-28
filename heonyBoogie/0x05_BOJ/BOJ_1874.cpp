#include <iostream>
#include <stack>
#include <list>
using namespace std;
bool use[100001] = { false }; // 인덱스 수가 stack에 있는지 없는지

int main(void) {
	int n,x;
	stack<int> s;
	list<char> L; //정답 리스트
	cin >> n;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		s.push(i);
		use[i] = true;
		L.push_back('+');
	}
	s.pop();
	L.push_back('-');
	
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (s.empty()) {
			for (int k =1; k <= x; k++) {
				if (use[k]) continue;
				s.push(k);
				L.push_back('+');
				use[k] = true;
			}
			s.pop();
			L.push_back('-');
		}
		else {
			if (s.top() > x) {
				cout << "NO\n";
				return 0;
			}
			else if (s.top() == x) {
				s.pop();
				L.push_back('-');
			}
			else {
				for (int k = s.top(); k <= x; k++) {
					if (use[k]) continue;
					s.push(k);
					L.push_back('+');
					use[k] = true;
				}
				s.pop();
				L.push_back('-');
			}
		}
	}
	for (char a : L) {
		cout << a << "\n";
	}
	return 0;
}