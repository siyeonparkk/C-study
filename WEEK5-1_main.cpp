#include<iostream>

#include<string>

using namespace std;



class phonebook

{

private:

	string name;

	string phonenum;



public:

	void addPhone();

	void editPhone();

	string getPnum();

	string getName();

};



int main(void)

{

	phonebook p;

	p.addPhone();



	int n;

	do 

	{

		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;

		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;

		cout << "3. ���� >> ";

		cin >> n;



		switch (n)

		{

		case 1:   //��ȭ��ȣ ��ȸ

			cout << p.getName() << "::" << p.getPnum() << endl;

			break;

		case 2:   //��ȭ��ȣ ����

			p.editPhone();

		}

	} while (n != 3); //3�� �Է��ϸ� ����

}