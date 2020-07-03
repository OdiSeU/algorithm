#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int a,b,c,result;
	int nCnt[10] = {0,}; //0~9숫자 개수 카운트 배열
	
	cin >> a >> b >> c;
  
	// a*b*c의 최댓값은 4바이트 미만이므로 result는 int형으로 충분!
	result = a*b*c;
	
	while(result) {       	  //result가 0이 아니면
		nCnt[result%10]++;//1의자리수 카운트 +1
		result /= 10;     //reslut의 일의자리 버리기
	}
	
 	 //카운트 배열 요소 출력
	for(int i=0; i<10; i++) {
		cout << nCnt[i] << endl;
	}

	return 0;
}
