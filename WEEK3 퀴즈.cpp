#include <iostream>
#include <string>
using namespace std;


int max(int a, int b) {   //�� ū ���� ã�� �Ű������� �ִ� �Լ�

	if (a > b) return a;
	else return b;

}



int min(int a, int b) {    //�� ���� ���� ã�� �Ű������� �ִ� �Լ�

	if (a > b) return b;

	else return a;

}



int main(void) {

	int a, b;

	cout << "�� ���� �Է��� �ּ��� (����� ����)<< ";

	cin >> a >> b;

	cout << endl;



	cout << "ū �� >>" << max(a, b) << endl;
	cout << "���� �� >>" << min(a, b) << endl;

}