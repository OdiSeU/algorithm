#include <iostream>
#include <string>
#include <list>
using namespace std;

int findPokeIdx(string* pokeArr, int pokeNum, string pokeName) {
	for (int i = 0; i < pokeName.size(); i++) {
		for (int j = 0; j < pokeNum; j++) {
			if (pokeArr[j][i]) {} // 추가
		}
	}
}

int main() {
	int pokeNum, questNum;
	cin >> pokeNum >> questNum;
	string* pokeArr = new string[pokeNum];
	for (int i = 0; i < pokeNum; i++) {
		cin >> pokeArr[i];
	}

	while (questNum--) {
		bool isString = false;
		int pokeIdx;
		string input;
		cin >> input;
		try {
			pokeIdx = stoi(input);
		}
		catch (...) {
			isString = true;
		}

		if (isString) {
			cout << findPokeIdx(pokeArr, pokeNum, input) << '\n';
		}
		else {
			cout << pokeArr[pokeIdx] << '\n';
		}
	}

	return 0;
}
