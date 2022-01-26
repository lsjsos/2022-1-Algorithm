#include <iostream>
#include <string>
using namespace std; 
const int MX = 2000000;
int dat[MX];
int head = 0, tail = 0;
void pop() {
	if (head == tail) cout << -1 << "\n";
	else cout << dat[head++] << "\n";
 }

void push(int x) {
	if (head - tail == 1) return;
	dat[tail] = x; 
	if (tail == MX) tail = 0;
	tail++;
}

void front() {
	if(head-tail == 0)  cout << -1 << "\n";
	else cout << dat[head] << "\n";
}

void back() {
	if (head - tail == 0)  cout << -1 << "\n";
	else cout << dat[tail-1] << "\n";
}

void size() {
	if (head < tail) cout << tail - head << "\n";
	else if (head == tail) cout << 0 << "\n";
	else cout << MX - head + tail + 1 << "\n";
}

void empty() {
	if (head - tail == 0) cout << 1 << "\n";
	else cout << 0 << "\n";
}

int main(void) {
	int n, x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") { cin >> x; push(x); }
		else if (s == "pop") { pop(); }
		else if (s == "size") { size(); }
		else if (s == "empty") { empty(); }
		else if (s == "front") { front(); }
		else { back(); }
	}

	return 0;
}
