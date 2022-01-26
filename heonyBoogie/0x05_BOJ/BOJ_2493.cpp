#include <iostream>
#include <stack>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,h;
	stack<pair<int,int>> s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h;
		pair<int, int> p = make_pair(h, i);
		while (!s.empty()) {
			if (s.top().first < p.first) {
				s.pop();
			}
			else {
				cout << s.top().second << " ";
				s.push(p);
				break;
			}
		}
		if (s.empty()) {
			cout << 0 << " ";
			s.push(p);
		}
	}
	
	return 0;
}