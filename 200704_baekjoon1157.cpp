#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int cntAlpha[26]={0,}, maxCnt = 0, index=0;
	char mostAlpha = '?';
	string str;
	cin >> str;
	
	for(int i=0; i<str.length(); i++) {
		if('a'<=str[i] && str[i]<='z') index = str[i]-'a';
		if('A'<=str[i] && str[i]<='Z') index = str[i]-'A';
		if(++cntAlpha[index] > maxCnt) {
			maxCnt = cntAlpha[index];
			mostAlpha = 'A'+index;
		} else if(cntAlpha[index] == maxCnt) {
			mostAlpha = '?';
		}
	}
	cout << mostAlpha;
	
	return 0;
}
