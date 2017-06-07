#include <iostream>

using namespace std;

/////////////////////////////////////////////
// date : 2017-06-07
// 작성자 : 심민섭
// 정보처리기사 실기 알고리즘 공부 중 플로차트를 보면서 C++ 공부도 하고 알고리즘도 소스로 짜보고 싶어서 만들게 되었음.
/////////////////////////////////////////////

// 변수 선언
int a[100]; // 구한 약수가 저장될 1차원 배열
int b; // 약수를 구하기 위해 입력 받은 숫자가 저장될 변수
int c; // 1씩 증가되는 제수가 저장될 변수, 즉 c는 1부터 b까지 차례로 변경된다.
int d; // 약수가 저장될 a 배열의 위치를 지정해 주는 변수, 즉 d는 1부터 약수의 개수까지 차례로 변경된다.
int mok; // 나머지를 구하기 위해 입력받은 수 b를 c로 나눈 몫이 저장될 변수
int ngm; // 입력 받은 숫자 b를 c로 나눈 나머지가 저장될 변수
int i; // 약수를 출력할 때 배열의 위치를 저장해 주는 변수


void divisor() {
	c += 1;

	if (c <= b) {
		mok = (int)(b / c);
		ngm = b - mok * c;

		if (ngm == 0) {
			d += 1;
			a[d] = c;
			divisor();
		}
		else {
			divisor();
		}
	}
	else {
		//cout << b << endl;

		for (i = 1; i < d; i++) {
			cout << a[i];
			cout << " ";
		}
	}
}

int main(int argc, char* argv[]) {

	cout << "약수구하기" << endl;
	cout << "숫자를 입력하세요 :: ";
	cin >> b;

	c = 0;
	d = 0;

	divisor();

	cin >> b;
	return 0;
}