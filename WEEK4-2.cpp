#include <iostream>
#include<string>
using namespace std;


class phonebook { //Ŭ���� ����
private:
	string name; //��� ����
	string number; //��� ����


public:
	void addPhone(); //��ȭ��ȣ �߰� �Լ�
	void editPhone(); //��ȣ ���� �Լ�
	string getPnum(); //��ȣ �ҷ����� �Լ�
	string getName(); //�̸� �ҷ����� �Լ�


};


void phonebook::addPhone() { //��ȸ��ȣ �߰� �Լ�


	cout << "---SWING ��ȭ��ȣ��---" << endl;
	cout << "�̸��� �Է��� �ּ��� >>" << endl;

	cin >> name;

	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>" << endl;

	cin >> number;



}

void phonebook::editPhone() { //��ȣ ���� �Լ�


	string newname;

	cout << "�̸��� �Է��� �ּ���>>";
	do {

		cin >> newname;

		if (newname != name) {
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է��� �ּ���";
		}

	} while (newname != name);


	cout << "������ ��ȭ��ȣ�� �Է��� �ּ���";
	cin >> number;

}

string phonebook::getPnum() {

	return number; //��ȣ�� �ҷ��´�.

}

string phonebook::getName() {

	return name; //�̸��� �ҷ��´�.

}




int main(void) {

	phonebook p; //��ü ����
	int write;//�Է°�
	p.addPhone(); //��ȭ��ȣ �߰� �Լ�

	do {
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >>";
		cin >> write;

		switch (write) {
		case 1: //�ֽ� ��� ��ȭ��ȣ ��ȸ
			cout << p.getName() << "::" << p.getPnum() << endl;

		case 2: //�ֽ� ��� ��ȭ��ȣ ����
			p.editPhone();


		}
	} while (write != 3); //3�� ���Ḧ ������ ������


	return 0;

}