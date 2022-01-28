#include <iostream>
#include <string>
const int MX = 10000;
int dat[2*MX+1];
int head = MX, tail = MX;
using namespace std;
void push_front(){
	int x;
	cin >> x;
	dat[--head] = x;	
}
void push_back(){
	int x;
	cin >> x;
	dat[tail++] = x;
}
void pop_front(){
	if(head-tail == 0) cout << -1 << "\n";
	else cout << dat[head++] << "\n";
}
void pop_back(){
	if(head-tail == 0) cout << -1 << "\n";
	else cout << dat[--tail] << "\n";
}
void size(){
	cout << tail-head <<"\n";
}
void empty(){
	if(head-tail == 0) cout << 1 <<"\n";
	else cout << 0 << "\n";
}
void front(){
	if(head-tail == 0) cout << -1 << "\n";
	else cout << dat[head] << "\n";
}

void back(){
	if(head-tail == 0) cout << -1 << "\n";
	else cout << dat[tail-1] << "\n";
	
}
int main(void){
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> s;
		if(s == "push_front") push_front();
		else if(s == "push_back") push_back();
		else if(s == "pop_front") pop_front();
		else if(s == "pop_back") pop_back();
		else if(s == "size") size();
		else if(s == "empty") empty();
		else if(s == "front") front();
		else back();
	}
	return 0;
}
