#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int num1, num2;
	cin >> num1 >> num2;
	
	while(num1||num2) {
		cout << num1+num2 << endl;
		cin >> num1 >> num2;
	}
	
	return 0;
}
