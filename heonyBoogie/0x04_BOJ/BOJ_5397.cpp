#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		list<char> L;
		string s;
		cin >> s;
		auto it = L.begin();
		for (char a : s) {
			if (a == '<') {
				if(it!=L.begin()) it--;
			}
			else if (a == '>') {
				if (it != L.end()) it++;
			}
			else if (a == '-') {
				if (it != L.begin()) { // it!=L.begin()을 추가하지 않아서 런타임 에러 발생(list가 비어있지 않아도 커서가 왼쪽 끝에 있을 수 있기 때문에 그 경우를 고려)
					it = L.erase(--it);
				}
			}
			else {
				L.insert(it, a);
			}
		}
		for (char a : L) {
			cout << a;
		}
		cout << "\n"; 
	}

	return 0;
}