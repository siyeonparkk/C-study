#include <iostream>
#include <string.h>
#include "PhoneBook.h"
using namespace std;

int main()
{
	PhoneBook p;  
	int num;

	p.addPhone();

	while (1) {
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >> ";
		cin >> num;

		if (num == 1) {
			p.getName();
			p.getPnum();
		}

		else if (num == 2) {
			cout << endl;
			p.editPhone();
		}

		else if (num == 3)
			break;
	}
}