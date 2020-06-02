#include <iostream>
#include <cstdlib> //rand(), srand()함수, RAND_MAX = 32767
#include <ctime> 
using namespace std;

class Random { //클래스 선언
public:
	Random() { srand((unsigned)time(0)); } //time(0)은 컴파일마다 랜덤수가 변경된다는 뜻
	int next(); //함수 선언
	int nextInRange(int a, int b); //함수 선언
};
int Random::next() { //매개변수가 없는 기본 생성자
	int n = rand(); //랜덤수를 발생시킨다.
	return n;
}
int Random::nextInRange(int a, int b) { //매개변수가 있는 생성자
	int n;
	n = a + (rand() % (b - a + 1)); //a부터 b까지
	return n;
}

int main() {
	Random number; //number객체 생성
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = number.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = number.nextInRange(2, 4); //nextInRange를 사용하여 2에서 4까지 정수 출력
		cout << n << ' ';
	}
	cout << endl;
}