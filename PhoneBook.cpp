#include <iostream>
#include <string.h>
#include "PhoneBook.h"
using namespace std;

void PhoneBook::addPhone()
{
	cout << "--- swing ��ȭ��ȣ�� ---" << endl;
	cout << "�̸��� �Է��� �ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >> ";
	cin >> phone_number;
	cout << endl;
}

void PhoneBook::editPhone()
{
	string re_name;

	cout << "�̸��� �Է��� �ּ��� >> ";
	cin >> re_name;

	while (1) {
		if (name == re_name) {
			name = re_name;  // 2���� �ٽ� �������� �� ������ ���� �ʵ��� �� �Է� ���� name�� ����
			break;
		}

		else {  // ������ �Է��� �̸��� �������� ������ �Է� �� �ٽ� �ޱ�
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ��� >> ";
			cin >> re_name;
		}
	}

	cout << "��ȭ��ȣ�� �Է��� �ּ��� >> ";
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