#include<iostream>
using namespace std;
void checkArea(bool** field, int r, int c) {

}

int main() {
	int testNum;
	cin >> testNum;
	while (testNum--) {
		int row, col, cbgNum, cnt = 0;
		cin >> row >> col >> cbgNum;
		bool** field = new bool* [row];
		int** cbgArr = new int* [cbgNum];
		for (int i = 0; i < row; i++) {
			field[i] = new bool[col];
		}
		for (int i = 0; i < cbgNum; i++) {
			cbgArr[i] = new int[2];
			cin >> cbgArr[i][0] >> cbgArr[i][1];
			field[cbgArr[i][0]][cbgArr[i][1]] = 0;
		}

		for (int i = 0; i < cbgNum; i++) {
			if (field[cbgArr[i][0]][cbgArr[i][1]] == 0) {
				cnt++;
				checkArea(field, cbgArr[i][0], cbgArr[i][1]);
			}
		}
	}
}
