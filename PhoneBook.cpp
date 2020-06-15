#include <iostream>
#include <string.h>
#include "PhoneBook.h"
using namespace std;

void PhoneBook::addPhone()
{
	cout << "--- swing 전화번호부 ---" << endl;
	cout << "이름을 입력해 주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >> ";
	cin >> phone_number;
	cout << endl;
}

void PhoneBook::editPhone()
{
	string re_name;

	cout << "이름을 입력해 주세요 >> ";
	cin >> re_name;

	while (1) {
		if (name == re_name) {
			name = re_name;  // 2번을 다시 실행했을 때 오류가 나지 않도록 새 입력 값을 name에 대입
			break;
		}

		else {  // 기존에 입력한 이름과 동일하지 않으면 입력 값 다시 받기
			cout << "연락처가 존재하지 않습니다. 다시 입력해 주세요 >> ";
			cin >> re_name;
		}
	}

	cout << "전화번호를 입력해 주세요 >> ";
	cin >> phone_number;
	cout << endl;
}

void PhoneBook::getPnum()
{
	cout << phone_number << endl << endl;
}

void PhoneBook::getName()
{
	cout << name << "::";
}