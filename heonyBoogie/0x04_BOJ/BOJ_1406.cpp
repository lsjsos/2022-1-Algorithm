#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {
	string s;
	list<char> L;
	cin >> s;

	for (char a : s) {
		L.push_back(a);
	}
	int n;
	char c,d;
	auto t = L.end();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		switch (c) {
		case 'L':
			if (t != L.begin()) t--;
			break;
		case 'D':
			if (t != L.end()) t++;
			break;
		case 'B':
			if (t != L.begin()){
				//원래 코드 t = L.erase(t); 커서 오른쪽 값을 삭제함으로 인해 double free 런타임 오류 발생
				t = L.erase(--t); //
			}
			break;
		case 'P':
			cin >> d;
			L.insert(t, d);
			break;
		default:
			break;
		}
	}
	for (auto it = L.begin(); it != L.end(); it++) {
		cout << *it;
	}
	return 0;
}

/*
iterator를 사용하여 list erase 할 때 주의
https://blossoming-man.tistory.com/entry/cstdlisterase-%ED%95%A8%EC%88%98-%EC%82%AC%EC%9A%A9-%EC%8B%9C-%EB%B0%98%ED%99%98-%EA%B0%92%EC%9D%84-%EC%82%AC%EC%9A%A9%ED%95%98%EC%9E%90
*/