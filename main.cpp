#include<iostream>
using namespace std;

#include "Class.h"



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

