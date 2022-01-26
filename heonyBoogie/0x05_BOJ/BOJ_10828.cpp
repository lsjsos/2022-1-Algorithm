#include <iostream>
#include <string>
using namespace std;
const int MX = 1000005;
int dat[MX];
int pos = 0;
void push(int x){
	dat[pos++] = x;
}
void pop(){
	if(pos>0){
		cout << dat[--pos] << "\n";
	}else{
		cout << -1 << "\n";
	}
}
void top(){
	if(pos > 0){
		cout << dat[pos-1] << "\n";
	}else {
		cout << -1 << "\n";
	}
}
void empty(){
	if(pos == 0) cout << 1 <<"\n";
	else cout << 0 << "\n";
}
void size(){
	cout << pos << "\n";
}
int main(void){
	int n,x;
	cin >> n;
	string s;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s=="push"){
			cin >> x;
			push(x);
		}else if(s=="top"){
			top();
		}else if(s=="size"){
			size();
		}else if(s=="empty"){
			empty();
		}else{
			pop();
		}
	}
	
	return 0;
}
