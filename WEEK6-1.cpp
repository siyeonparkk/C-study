#include<iostream>
#include<string>
using namespace std;

class ATM {
private:
	string name; //������ �̸�
	int pw=0; // ���� ��й�ȣ
	int money=0; // ���� �ܾ�
	int check=0; //���� ��й�ȣ Ȯ��

public:
	ATM(); // ������
	void deposit(); // �Ա�
	void withdraw(); // ����
	void send(string receiver, int sendMon); // ��ü - ����
	void receive(int receiveMon); // ��ü - ����
	int getMoney(); // ���ִ��� ���
	string getName(); // �̸� �ҷ�����


	void setName();//�̸� �Է�
	void setPw(); //��й�ȣ �Է�
	void setMoney(); //�ܾ� �Է�
	void pwcheck();
	void pwcheck2();


};

int main() {

	
	int i, j, k = 100, m = 100;
	int people; //���࿡ ������ �ο�
	int number; //��ȣ
	int send; //���� �ݾ�
	string findname = " ";
	string Name = " ";

	cout << "���࿡ ������ �ο��� �Է����ּ���>> ";
	cin >> people;
	ATM* account = new ATM[people]; //people��ŭ ��ü �迭 ���� ����


	for (i = 0; i < people; i++) {
		cout << endl << i + 1 << "��° �մ�" << endl << endl;
		cout << "������ �����ֽʽÿ� >>";
		(account + i)->setName();
		cout << "��й�ȣ�� �Է����ּ��� >>";
		(account + i)->setPw();
		cout << "�ѹ� �� �Է����ּ���>>";
		(account + i)->setMoney();
		cout << endl;
	}


	while (1) {
		while (1) {
			cout << endl << "----SWING ATM----" << endl;
			cout << "������ �Է����ּ���(������ x�� �Է����ּ���)>>";
			cin >> findname;

			if (findname == "x") //���Ḧ ����
				break;
			k = 100;   // k���� �ʱ�ȭ
			for (j = 0; j < people; j++)
			{
				if (findname == (account + j)->getName())
					k = j;    // �Է��� �̸��� �������� �̸��� ������ �ش� �ε��� ���� k�� ����
			}

			if (k == 100 && findname != "x")   // Name != "x"�� �߰��Ͽ� �Ʒ� ������ ��µ��� �ʵ��� �Ѵ�.
				cout << "�������� �ʴ� �������Դϴ�." << endl;    // �Է��� �̸��� �������� ������, ������ ���� ���� ���
			else
				break;   // ������ �̸��� �����ϸ� �������� �Ѿ
		}

		if (findname == "x")    // while������ �������� ��, x�� �ԷµǸ� ���� while�� Ż���Ͽ� ���α׷��� ����
			break;

		number = 0;

		while (number != 5)   // 5���� ���� ������ �ݺ�
		{
			cout << endl << " --- SWING ATM " << (account + k)->getName() << "�� ---" << endl;
			cout << "1. �Ա�" << endl;
			cout << "2. ����" << endl;
			cout << "3. ��ü" << endl;
			cout << "4. �ܾ� Ȯ��" << endl;
			cout << "5. ����" << endl << endl;
			cout << "��ȣ�� �������ּ��� >> ";
			cin >> number;   // �۾��� ��ȣ �Է�

			switch (number)  // 1~5 �߿� ����
			{
			case 1:   // �Ա�
			{
				cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
				(account + k)->deposit();   // �Ա��� �ݾ�
				cout << endl << "���� " << (account + k)->getName() << "���� �ܾ��� " << (account + k)->getMoney() << "�� �Դϴ�." << endl;  //  �ܾ� ���
				break;
			}
			case 2:   // ����
			{
				cout << "�󸶸� �����Ͻðڽ��ϱ�? >> ";
				(account + k)->withdraw();   // ������ �ݾ�
				cout << "��й�ȣ�� �Է����ּ��� >> ";
				(account + k)->pwcheck();
				cout << endl << "���� " << (account + k)->getName() << "���� �ܾ��� " << (account + k)->getMoney() << "�� �Դϴ�." << endl;   // �ܾ� ���
				break;
			}
			case 3:   // ��ü
			{
				cout << "�������� �����ڽ��ϱ�? >> ";
				cin >> findname;   // ��ü�� ���

				m = 100; // m�� �ʱ�ȭ

				for (j = 0; j < people; j++)
				{
					if ( findname== (account + j)->getName())
						m = j;    // �Է��� �̸��� �������� �̸��� ������ �ش� �ε��� ���� m�� ����
				}

				if (m == 100)  // �Է��� �̸��� �������� ���� ���
					break;

				cout << "�󸶸� �����ڽ��ϱ�? >> ";
				cin >> send;  // ���� �ݾ�
				(account + k)->send((account + m)->getName(), send);
				cout << "��й�ȣ�� �Է����ּ��� >> ";
				(account + k)->pwcheck2();   // ��й�ȣ �Է�
				cout << endl << (account + m)->getName() << "�Բ� " << send << "���� ���½��ϴ�." << endl;
				(account + m)->receive(send);
				cout << endl << "���� " << (account + k)->getName() << "���� �ܾ��� " << (account + k)->getMoney() << "�� �Դϴ�." << endl;   // �ܾ� ���
				break;
			}
			case 4:  // �ܾ� Ȯ��
				cout << (account + k)->getName() << "���� ���� �ܾ��� " << (account + k)->getMoney() << "�� �Դϴ�." << endl; break;
			case 5: break;   // ���α׷� ����
			}
		}
	}

	cout << "ATM�� �����մϴ�." << endl;

	return 0;
}
		
	






ATM::ATM() {};


void ATM::deposit() {

	int depositmoney;
	cin >> depositmoney; //�Ա� �ݾ�
	money += depositmoney; 

}


void ATM::withdraw() {

	int withdrawmoney;
	cin >> withdrawmoney;
	money -= withdrawmoney;



}

void ATM::send(string receiver, int sendMon) {

	money -= sendMon;
}



void ATM::receive(int receiveMon) {

	money += receiveMon;
}


int ATM::getMoney() {
	return money;
}

void ATM::setName() {
	cin >> name;
}



string ATM::getName() {
	return name;

}

void ATM::setPw() {
	cin >> pw;
}

void ATM::setMoney() {
	cin >> money;
}

void ATM::pwcheck() {
	cin >> check;

	if (check != pw) {
		while (check != pw) {
			cout << "��й�ȣ�� ���� �ٸ��ϴ�." << endl << endl;
			cout << "��й�ȣ�� �Է����ּ���>>";
				cin >> check;
		}
	}
}

void ATM::pwcheck2() {
	cin >> check;
	if (check != pw) {
		while (check != pw) {
			cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
			cout << "��й�ȣ�� �Է����ּ��� >>";
			cin >> check;
		}
	}
}