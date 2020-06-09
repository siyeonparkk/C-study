#include <iostream>


using namespace std;



class VendingMachine {

private:

	string name;  //음료 이름

	int price;  //음료 가격

	int total = 0;



public:

	VendingMachine() {};  // 생성자

	void purchase(double v1);  //매개변수 v1은 총 금액

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

	int money; // 돈



	cout << endl << "총 금액: " << v1 << endl;

	cout << "지폐를 입력하세요: ";

	cin >> money;



	int change = money - v1; //거스름돈




	void VendingMachine::menu()

	{

		cout << "=====SWING 자판기=====" << endl;

		cout << "1.코카콜라: 1500원" << endl;

		cout << "2.비타500: 900원" << endl;

		cout << "3.파워에이드: 2000원" << endl;

		cout << "4.준비중" << endl;

		cout << "5.계산" << endl << endl;

	}



	void VendingMachine::NewMenu()

	{

		cout << "=====SWING 자판기=====" << endl;

		cout << "1.코카콜라: 1500원" << endl;

		cout << "2.비타500: 900원" << endl;

		cout << "3.파워에이드: 2000원" << endl;

		cout << "4." << name << ": " << price << "원" << endl;

		cout << "5.계산" << endl;

	}


	while (1) { //무한반복문사용

		if (money > v1) {

			if (change % 100 == 0)  // 거스름돈 줄 수 있을 때

				cout << "거스름 돈 입니다." << endl;

			else //값이 떨어지지 않아서 거스름돈 줄 수 없을 때

				cout << "거스름 돈은 500원과 100원만 가능합니다." << endl;



			cout << "500원: " << change / 500 << "개" << endl;

			cout << "100원: " << change % 500 / 100 << "개" << endl;

			cout << "안녕히 가세요." << endl;

			break;

		}



		else if (money == v1) {  // 지불금액 = 총금액

			cout << "거스름 돈이 없습니다. 안녕히 가세요." << endl;

			break;

		}



		else {

			cout << "금액이 부족합니다. 다시 넣어주세요: ";

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

	VendingMachine v; //객체 생성

	VendingMachine* p = &v; //포인터변수 p생성.

	string name2;

	double new_price;

	int num;

	int num2;



	v.menu();//첫 메뉴판 출력



	cout << "추가할 음료 이름을 입력해주세요: "; //4번 추가음료

	cin >> name2;

	p->setName(name2);  // name 값 반환



	cout << "판매할 가격을 입력하세요: ";

	cin >> new_price;

	p->setPrice(new_price);  // price 값 반환

	cout << endl;



	do {

		v.NewMenu();//업데이드 퇸 메뉴



		cout << "번호를 선택해주세요: ";

		cin >> num;

		switch (num) {

		case 1:

			cout << "구매할 수량을 입력해주세요: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 1500);  // 코카콜라는 1500원

			break;

		case 2:

			cout << "구매할 수량을 입력해주세요: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 900);  //비타500은 900원

			break;

		case 3:

			cout << "구매할 수량을 입력해주세요: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * 2000);  //파워에이드는 2000원

			break;

		case 4:

			cout << "구매할 수량을 입력해주세요: ";

			cin >> num2;

			cout << endl;

			p->setTotal(num2 * v.getPrice());

			break;

		}

	} while (num != 5);  //5를 누르면 정지



	cout << endl << "계산 중입니다. 기다려주세요..." << endl;

	v.purchase(v.getTotal());//purchase 멤버함수 호출, 매개변수 : total 값

}