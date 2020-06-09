#ifndef CLASS_H
#define CLASS_H

#pragma once


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


#endif