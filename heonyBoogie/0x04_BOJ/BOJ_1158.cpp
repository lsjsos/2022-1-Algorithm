#include <iostream>
#include <list>
using namespace std;

int main(void) {
	list<int> L;
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		L.push_back(i);
	}
	auto it = L.begin();
	k--;
	cout << "<";
	while (true) {
		for (int i = 0; i < k; i++) {
			if (it != --L.end()) it++;
			else  it = L.begin();
		}
		cout << *it;
		it = L.erase(it);
		if (L.empty()) break;
		cout << ", ";
		if (it == L.end()) it = L.begin();
	}
	cout << ">";
	return 0;
}