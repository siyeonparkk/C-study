#include <iostream>
#include<string>
using namespace std;


class phonebook { //클래스 선언
private:
	string name; //멤버 변수
	string number; //멤버 변수


public:
	void addPhone(); //전화번호 추가 함수
	void editPhone(); //번호 수정 함수
	string getPnum(); //번호 불러오기 함수
	string getName(); //이름 불러오기 함수


};


void phonebook::addPhone() { //전회번호 추가 함수


	cout << "---SWING 전화번호부---" << endl;
	cout << "이름을 입력해 주세요 >>" << endl;

	cin >> name;

	cout << "전화번호를 입력해 주세요 >>" << endl;

	cin >> number;



}

void phonebook::editPhone() { //번호 수정 함수


	string newname;

	cout << "이름을 입력해 주세요>>";
	do {

		cin >> newname;

		if (newname != name) {
			cout << "연락처가 존재하지 않습니다. 다시 입력해 주세요";
		}

	} while (newname != name);


	cout << "변경할 전화번호를 입력해 주세요";
	cin >> number;

}

string phonebook::getPnum() {

	return number; //번호를 불러온다.

}

string phonebook::getName() {

	return name; //이름을 불러온다.

}




int main(void) {

	phonebook p; //객체 생성
	int write;//입력값
	p.addPhone(); //전화번호 추가 함수

	do {
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >>";
		cin >> write;

		switch (write) {
		case 1: //최신 등록 전화번호 조회
			cout << p.getName() << "::" << p.getPnum() << endl;

		case 2: //최신 등록 전화번호 수정
			p.editPhone();


		}
	} while (write != 3); //3번 종료를 누르기 전까지


	return 0;

}