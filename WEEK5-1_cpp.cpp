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



void phonebook::addPhone() // ���ο� ��ȣ �߰�

{

	cout << "-- SWING ��ȭ��ȣ�� --" << endl;

	cout << "�̸��� �Է��� �ּ��� >> ";

	cin >> name;

	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>";

	cin >> phonenum;

	cout << endl;

}



void phonebook::editPhone()  // ���� ��ȣ�� ������

{

	string newname;  

	cout << "�̸��� �Է��� �ּ��� >>";





	do  
	{

		cin >> newname;



		if (name != newname)   //name�� newname�� �ٸ� ��

		{

			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >>";

		}

	} while (name != newname);



	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >>";

	cin >> phonenum;

}


string phonebook::getPnum()   // ��ȣ �ҷ�����

{

	return phonenum;

}



string phonebook::getName()   // �̸��� �ҷ�����

{

	return name;

}