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
	 	pos--;
	}
}

int main(void){
	int n,x;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x == 0){
			pop();
		}else push(x);
	}
	x = 0;
	for(int i=0;i<pos;i++){
		x+=dat[i];
	}
	cout << x;
	return 0;
}
