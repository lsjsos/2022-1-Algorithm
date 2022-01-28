#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,x;
	cin >> n;
	queue<int> Q; 
	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	for (int i = 0; i < n-1; i++) {
		Q.pop();
		x = Q.front();
		Q.pop();
		Q.push(x);
	}
	cout << Q.front() << "\n";

	return 0;
}