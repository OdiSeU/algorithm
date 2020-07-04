#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	bool check = false;
	int cnt=0;
	string str;
	getline(cin, str);
	
	for(int i=0; i<str.length(); i++) {
		if(str[i]!=' ') {
			if(!check) {
				check = true;
				cnt++;
			}
		} else check = false;
	}
	
	cout << cnt;
	return 0;
}
