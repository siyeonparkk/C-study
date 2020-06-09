#include <iostream>

#include<string>


#include"Class.h"



using namespace std;



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









