#include <iostream>
#include <string>
using namespace std;


int max(int a, int b) {   //더 큰 값을 찾는 매개변수가 있는 함수

	if (a > b) return a;
	else return b;

}



int min(int a, int b) {    //더 작은 값을 찾는 매개변수가 있는 함수

	if (a > b) return b;

	else return a;

}



int main(void) {

	int a, b;

	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분)<< ";

	cin >> a >> b;

	cout << endl;



	cout << "큰 수 >>" << max(a, b) << endl;
	cout << "작은 수 >>" << min(a, b) << endl;

}