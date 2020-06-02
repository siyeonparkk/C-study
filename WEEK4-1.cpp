#include <iostream>
#include <cstdlib> //rand(), srand()�Լ�, RAND_MAX = 32767
#include <ctime> 
using namespace std;

class Random { //Ŭ���� ����
public:
	Random() { srand((unsigned)time(0)); } //time(0)�� �����ϸ��� �������� ����ȴٴ� ��
	int next(); //�Լ� ����
	int nextInRange(int a, int b); //�Լ� ����
};
int Random::next() { //�Ű������� ���� �⺻ ������
	int n = rand(); //�������� �߻���Ų��.
	return n;
}
int Random::nextInRange(int a, int b) { //�Ű������� �ִ� ������
	int n;
	n = a + (rand() % (b - a + 1)); //a���� b����
	return n;
}

int main() {
	Random number; //number��ü ����
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = number.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = number.nextInRange(2, 4); //nextInRange�� ����Ͽ� 2���� 4���� ���� ���
		cout << n << ' ';
	}
	cout << endl;
}