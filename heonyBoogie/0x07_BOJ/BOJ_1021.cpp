#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	deque<int> D;
	int n, m, x;
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		D.push_back(i);
	}
	while (m--) {
		cin >> x;
		int idx = 0;
		for (auto a : D) {
			if (a == x) break;
			else idx++;
		}
		while (D.front() != x) {
			if (idx < D.size()- idx){
				D.push_back(D.front());
				D.pop_front();
			}
			else {
				D.push_front(D.back());
				D.pop_back();
			}
			ans++;
		}
		D.pop_front();
	}
	cout << ans;
	return 0;
}