#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	while(1) {
		int input, num, reverse=0;
		cin >> input;
		if(input==0) break;
		num = input;
		while(num) {
			reverse = reverse*10 + num%10;
			num /= 10;
		}
		if(input == reverse) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
