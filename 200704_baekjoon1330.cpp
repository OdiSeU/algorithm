#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int a, b;
	cin >> a >> b;
	cout << (a < b ? "<" : a > b ? ">" : "==");
	return 0;
}
