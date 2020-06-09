#include <iostream>


using namespace std;



class VendingMachine {

private:

	string name;  //���� �̸�

	int price;  //���� ����

	int total = 0;



public:

	VendingMachine() {};  // ������

	void purchase(double v1);  //�Ű����� v1�� �� �ݾ�

	void menu();

	void NewMenu();

	string getName();

	double getPrice();

	double getTotal();

	void setName(string n);

	void setPrice(int p);

	void setTotal(int t);

};







void VendingMachine::purchase(double v1)

{

	int money; // ��



	cout << endl << "�� �ݾ�: " << v1 << endl;

	cout << "���� �Է��ϼ���: ";

	cin >> money;



	int change = money - v1; //�Ž�����




	void VendingMachine::menu()

	{

		cout << "=====SWING ���Ǳ�=====" << endl;

		cout << "1.��ī�ݶ�: 1500��" << endl;

		cout << "2.��Ÿ500: 900��" << endl;

		cout << "3.�Ŀ����̵�: 2000��" << endl;

		cout << "4.�غ���" << endl;

		cout << "5.���" << endl << endl;

	}



	void VendingMachine::NewMenu()

	{

		cout << "=====SWING ���Ǳ�=====" << endl;

		cout << "1.��ī�ݶ�: 1500��" << endl;

		cout << "2.��Ÿ500: 900��" << endl;

		cout << "3.�Ŀ����̵�: 2000��" << endl;

		cout << "4." << name << ": " << price << "��" << endl;

		cout << "5.���" << endl;

	}


	while (1) { //���ѹݺ������

		if (money > v1) {

			if (change % 100 == 0)  // �Ž����� �� �� ���� ��

				cout << "�Ž��� �� �Դϴ�." << endl;

			else //���� �������� �ʾƼ� �Ž����� �� �� ���� ��

				cout << "�Ž��� ���� 500���� 100���� �����մϴ�." << endl;



			cout << "500��: " << change / 500 << "��" << endl;

			cout << "100��: " << change % 500 / 100 << "��" << endl;

			cout << "�ȳ��� ������." << endl;

			break;

		}



		else if (money == v1) {  // ���ұݾ� = �ѱݾ�

			cout << "�Ž��� ���� �����ϴ�. �ȳ��� ������." << endl;

			break;

		}



		else {

			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���: ";

			cin >> money;

		}

	}

}



	string VendingMachine::getName()

	{

		return name;

	}



	double VendingMachine::getPrice()

	{

		return price;

	}



	double VendingMachine::getTotal()

	{

		return total;

	}



	void VendingMachine::setName(string n)

	{

		name = n;

	}



	void VendingMachine::setPrice(int p)

	{

		price = p;

	}



	void VendingMachine::setTotal(int t)

	{

		total += t;

	}




int main()

{

	VendingMachine v; //��ü ����

	VendingMachine* p = &v; //�����ͺ��� p����.

	string name2;

	double new_price;

	int num;

	int num2;



	v.menu();//ù �޴��� ���



	cout << "�߰��� ���� �̸��� �Է����ּ���: "; //4�� �߰�����

	cin >> name2;

	p->setName(name2);  // name �� ��ȯ



	cout << "�Ǹ��� ������ �Է��ϼ���: ";

	cin >> new_price;

	p->setPrice(new_price);  // price �� ��ȯ

	cout << endl;



	do {

		v.NewMenu();//�����̵� �� �޴�



		cout << "��ȣ�� �������ּ���: ";

		cin >> num;

		switch (num) {

		case 1:

			cout << "������ ������ �Է����ּ���: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 1500);  // ��ī�ݶ�� 1500��

			break;

		case 2:

			cout << "������ ������ �Է����ּ���: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 900);  //��Ÿ500�� 900��

			break;

		case 3:

			cout << "������ ������ �Է����ּ���: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 2000);  //�Ŀ����̵�� 2000��

			break;

		case 4:

			cout << "������ ������ �Է����ּ���: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * v.getPrice());

			break;

		}

	} while (num != 5);  //5�� ������ ����



	cout << endl << "��� ���Դϴ�. ��ٷ��ּ���..." << endl;

	v.purchase(v.getTotal());//purchase ����Լ� ȣ��, �Ű����� : total ��

}