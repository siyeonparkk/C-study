#include <iostream>

#include <string>



using namespace std;

int main() {

	string name;
	string birth;
	string age;
	string part;


	cout << "�̸��� �Է��ϼ���:";
	getline(cin, name);

	cout << "������ �Է��ϼ���:";
	getline(cin, birth);


	cout << "���̸� �Է��ϼ���:";
	getline(cin, age);



	cout << "�Ҽ� �а��� �Է��ϼ���:";
	getline(cin, part);



	


	cout << "<ȸ�� ����>" << '\n';

	cout << "===============================================" << '\n';

	cout << "�̸�:";

	cout << name << '\n';



	cout << "����:";

	cout << birth << '\n';



	cout << "����:";

	cout << age << '\n';



	cout << "�Ҽ� �а�:";

	cout << part << '\n';

}