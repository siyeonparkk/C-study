#include <iostream>

#include<string>


#include"Class.h"



using namespace std;



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









