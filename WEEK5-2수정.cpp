#include<iostream>
#include<string>
using namespace std;

class VendingMachine {
private:
	string name; //음료 이름
	int price; //가격
	int total=0; //음료 합산 값

public:
	VendingMachine() {}; //생성자
	void purchase(double v1); //매개변수 v1은 총 금액
	void menu(); //기존 메뉴판
	void menu2(); //새 메뉴판
	string getName();
	double getPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);

	
};

void VendingMachine::purchase(double v1){ //총 금액 출력, 지폐 입력, 거스름돈 출력
	int money=0; //지폐 입력
	int change; //거스름돈
	

	cout << "총 금액 : " << v1 << endl;
	cout << "지폐를 입력하세요 : ";

	while (1) { //반복문
		cin >> money;
		change = money - v1;
		

		if (change < 0) //입력한 금액이 총금액v1보다 적을 경우
		{
			cout << "금액이 부족합니다. 다시 넣어주세요.";
		}
		else if (change == 0)//입력한 금액과 총금액v1이 같을 경우
		{
			cout << "거스름돈이 없습니다. 안녕히 가세요." << endl;
		}
		else if (change > 0) //입력한 금액이 총금액v1보다 클경우 -> 거스름돈을 나눠줘야함
		{
			if (change % 100 == 0 || change %500 ==0) {}
			cout << "500원 : " << change / 500 << "개" << endl;
			cout << "100원 : " << change % 500 / 100 << "개" << endl;
			cout << "안녕히가세요." << endl;
			break;
		}
		else  { //거스름돈이 100원, 500원 단위로 나오지 않을 때
			cout << "거스름돈은 500원과 100원만 가능합니다." << endl;
			cout << "500원 : " << change / 500 << "개" << endl;
			cout << "100원 : " << change % 500 / 100 << "개" << endl;
			cout << "안녕히가세요." << endl;

			exit(1);


		}
	}
	



}


void VendingMachine::menu() { //menu()함수
	cout << "=====SWING 자판기=====" << endl;
	cout << "1.코카콜라 : 1500원" << endl;
	cout << "2.비타500 : 900원 " << endl;
	cout << "3.파워에이드 : 2000원" << endl;
	cout << "4.준비중" << endl;
	cout << "5.계산" << endl << endl;

	
}

void VendingMachine::menu2() {
	cout << "=====SWING 자판기=====" << endl;
	cout << "1.코카콜라 : 1500원" << endl;
	cout << "2.비타500 : 900원 " << endl;
	cout << "3.파워에이드 : 2000원" << endl;
	cout << "4."<<name<<" : "<<price<<"원" << endl;
	cout << "5.계산" << endl << endl;

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
	VendingMachine v; //객체 생성
	VendingMachine* p = &v; //포인터 변수 p생성. v의 주소를 받는다.

	string new_name;
	double new_price;
	int number; //입력하는 숫자값
	int amount; //구매할 수량

	v.menu(); //메뉴판 출력

	cout << "추가할 음료 이름을 입력해주세요: ";
	cin >> new_name;
	p->setName(new_name);

	cout << "판매할 가격을 입력해주세요: ";
	cin >> new_price;
	p->setPrice(new_price);
	cout << endl;


	do {
		v.menu2(); //새 메뉴 출력
		cout << "번호를 선택해주세요: ";
		cin >> number;
		

		switch (number) {

		case 1:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 1500); //set이용. *값에 접근하여 값을 수정한다.
			break;

		case 2:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 900); //set이용. *값에 접근하여 값을 수정한다.
			break;

		case 3:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> amount;
			cout << endl;
			p->setTotal(amount * 2000); //set이용. *값에 접근하여 값을 수정한다.
			break;

		case 4:
			cout << "구매할 수량을 입력해주세요 :";
			cin >> amount;
			cout << endl;
			p->setTotal(v.getPrice() * 1500); //set이용. *값에 접근하여 값을 수정한다.
			break;

		}

	} while (number != 5);

	cout << "\n계산 중입니다. 기다주세요 . . . " << endl;

	v.purchase(v.getTotal());
}
