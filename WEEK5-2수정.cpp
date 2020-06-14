#include<iostream>
#include<string>
using namespace std;

class VendingMachine {
private:
	string name; //���� �̸�
	int price; //����
	int total=0; //���� �ջ� ��

public:
	VendingMachine() {}; //������
	void purchase(double v1); //�Ű����� v1�� �� �ݾ�
	void menu(); //���� �޴���
	void menu2(); //�� �޴���
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);

	
};

void VendingMachine::purchase(double v1){ //�� �ݾ� ���, ���� �Է�, �Ž����� ���
	int money=0; //���� �Է�
	int change; //�Ž�����
	

	cout << "�� �ݾ� : " << v1 << endl;
	cout << "���� �Է��ϼ��� : ";

	while (1) { //�ݺ���
		cin >> money;
		change = money - v1;
		

		if (change < 0) //�Է��� �ݾ��� �ѱݾ�v1���� ���� ���
		{
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���.";
		}
		else if (change == 0)//�Է��� �ݾװ� �ѱݾ�v1�� ���� ���
		{
			cout << "�Ž������� �����ϴ�. �ȳ��� ������." << endl;
		}
		else if (change > 0) //�Է��� �ݾ��� �ѱݾ�v1���� Ŭ��� -> �Ž������� ���������
		{
			if (change % 100 == 0 || change %500 ==0) {}
			cout << "500�� : " << change / 500 << "��" << endl;
			cout << "100�� : " << change % 500 / 100 << "��" << endl;
			cout << "�ȳ���������." << endl;
			break;
		}
		else  { //�Ž������� 100��, 500�� ������ ������ ���� ��
			cout << "�Ž������� 500���� 100���� �����մϴ�." << endl;
			cout << "500�� : " << change / 500 << "��" << endl;
			cout << "100�� : " << change % 500 / 100 << "��" << endl;
			cout << "�ȳ���������." << endl;

			exit(1);


		}
	}
	



}


void VendingMachine::menu() { //menu()�Լ�
	cout << "=====SWING ���Ǳ�=====" << endl;
	cout << "1.��ī�ݶ� : 1500��" << endl;
	cout << "2.��Ÿ500 : 900�� " << endl;
	cout << "3.�Ŀ����̵� : 2000��" << endl;
	cout << "4.�غ���" << endl;
	cout << "5.���" << endl << endl;

	
}

void VendingMachine::menu2() {
	cout << "=====SWING ���Ǳ�=====" << endl;
	cout << "1.��ī�ݶ� : 1500��" << endl;
	cout << "2.��Ÿ500 : 900�� " << endl;
	cout << "3.�Ŀ����̵� : 2000��" << endl;
	cout << "4."<<name<<" : "<<price<<"��" << endl;
	cout << "5.���" << endl << endl;

}

string VendingMachine::getName() {
	return name;
}

double VendingMachine::getPrice() {
	return price;
}

double VendingMachine::getTotal() {
	return total;
}

void VendingMachine::setName(string n) {
	name = n;
}

void VendingMachine::setPrice(int p) {
	price = p;
}

void VendingMachine::setTotal(int t) {
	total += t;
}


int main() {
	VendingMachine v; //��ü ����
	VendingMachine* p = &v; //������ ���� p����. v�� �ּҸ� �޴´�.

	string new_name;
	double new_price;
	int number; //�Է��ϴ� ���ڰ�
	int amount; //������ ����

	v.menu(); //�޴��� ���

	cout << "�߰��� ���� �̸��� �Է����ּ���: ";
	cin >> new_name;
	p->setName(new_name);

	cout << "�Ǹ��� ������ �Է����ּ���: ";
	cin >> new_price;
	p->setPrice(new_price);
	cout << endl;


	do {
		v.menu2(); //�� �޴� ���
		cout << "��ȣ�� �������ּ���: ";
		cin >> number;
		

		switch (number) {

		case 1:
			cout << "������ ������ �Է����ּ��� :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 1500); //set�̿�. *���� �����Ͽ� ���� �����Ѵ�.
			break;

		case 2:
			cout << "������ ������ �Է����ּ��� :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 900); //set�̿�. *���� �����Ͽ� ���� �����Ѵ�.
			break;

		case 3:
			cout << "������ ������ �Է����ּ��� :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 2000); //set�̿�. *���� �����Ͽ� ���� �����Ѵ�.
			break;

		case 4:
			cout << "������ ������ �Է����ּ��� :";
			cin >> amount;
			cout << endl;
			p->setTotal(v.getPrice() * 1500); //set�̿�. *���� �����Ͽ� ���� �����Ѵ�.
			break;

		}

	} while (number != 5);

	cout << "\n��� ���Դϴ�. ����ּ��� . . . " << endl;

	v.purchase(v.getTotal());
}
