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
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
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