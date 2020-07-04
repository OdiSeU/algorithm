#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int num, sum=0, max=0;
	cin >> num;
	
	for(int i=0; i<num; i++) {
		int input;
		cin >> input;
		sum += input;
		if(max < input) max = input;
	}
	cout << ((float)sum/num) * (100.0/max);
	
	return 0;
}
