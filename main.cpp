#include<iostream>
using namespace std;

#include "Class.h"



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

