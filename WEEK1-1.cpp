#include <iostream>
#include <string>

using namespace std;
int main() {
	string name;
	string birth;
	int age;
	string part;


	cout << "�̸��� �Է��ϼ���:";
	cin >> name;
	cout << "������ �Է��ϼ���:";
	getline(cin, birth);
	cin.ignore(100, '\n');

	cout << "���̸� �Է��ϼ���:";
	cin >> age;
	cin.ignore(22, '\n');


	cout << "�Ҽ� �а��� �Է��ϼ���:";
	cin >> part;

	cin.ignore(100, '\n');

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