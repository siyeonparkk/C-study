#include<iostream>
#include<string>
using namespace std;

class ATM {
private:
	string name; //계좌주 이름
	int pw=0; // 계좌 비밀번호
	int money=0; // 계좌 잔액
	int check=0; //계좌 비밀번호 확인

public:
	ATM(); // 생성자
	void deposit(); // 입금
	void withdraw(); // 인출
	void send(string receiver, int sendMon); // 이체 - 받음
	void receive(int receiveMon); // 이체 - 보냄
	int getMoney(); // 얼마있는지 출력
	string getName(); // 이름 불러오기


	void setName();//이름 입력
	void setPw(); //비밀번호 입력
	void setMoney(); //잔액 입력
	void pwcheck();
	void pwcheck2();


};

int main() {

	
	int i, j, k = 100, m = 100;
	int people; //은행에 가입할 인원
	int number; //번호
	int send; //보낼 금액
	string findname = " ";
	string Name = " ";

	cout << "은행에 가입할 인원을 입력해주세요>> ";
	cin >> people;
	ATM* account = new ATM[people]; //people만큼 객체 배열 동적 생성


	for (i = 0; i < people; i++) {
		cout << endl << i + 1 << "번째 손님" << endl << endl;
		cout << "성명을 적어주십시오 >>";
		(account + i)->setName();
		cout << "비밀번호를 입력해주세요 >>";
		(account + i)->setPw();
		cout << "한번 더 입력해주세요>>";
		(account + i)->setMoney();
		cout << endl;
	}


	while (1) {
		while (1) {
			cout << endl << "----SWING ATM----" << endl;
			cout << "성함을 입력해주세요(종료라면 x를 입력해주세요)>>";
			cin >> findname;

			if (findname == "x") //종료를 선택
				break;
			k = 100;   // k값을 초기화
			for (j = 0; j < people; j++)
			{
				if (findname == (account + j)->getName())
					k = j;    // 입력한 이름과 계좌주의 이름이 같으면 해당 인덱스 값을 k에 대입
			}

			if (k == 100 && findname != "x")   // Name != "x"를 추가하여 아래 문구가 출력되지 않도록 한다.
				cout << "존재하지 않는 계좌주입니다." << endl;    // 입력한 이름이 존재하지 않으면, 다음과 같은 문구 출력
			else
				break;   // 계좌주 이름이 존재하면 메인으로 넘어감
		}

		if (findname == "x")    // while문에서 빠져나온 후, x가 입력되면 밖의 while문 탈출하여 프로그램을 종료
			break;

		number = 0;

		while (number != 5)   // 5번을 누를 때까지 반복
		{
			cout << endl << " --- SWING ATM " << (account + k)->getName() << "님 ---" << endl;
			cout << "1. 입금" << endl;
			cout << "2. 인출" << endl;
			cout << "3. 이체" << endl;
			cout << "4. 잔액 확인" << endl;
			cout << "5. 종료" << endl << endl;
			cout << "번호를 선택해주세요 >> ";
			cin >> number;   // 작업할 번호 입력

			switch (number)  // 1~5 중에 선택
			{
			case 1:   // 입금
			{
				cout << "입금할 금액을 입력해주세요 >> ";
				(account + k)->deposit();   // 입금할 금액
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;  //  잔액 출력
				break;
			}
			case 2:   // 인출
			{
				cout << "얼마를 인출하시겠습니까? >> ";
				(account + k)->withdraw();   // 인출할 금액
				cout << "비밀번호를 입력해주세요 >> ";
				(account + k)->pwcheck();
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;   // 잔액 출력
				break;
			}
			case 3:   // 이체
			{
				cout << "누구에게 보내겠습니까? >> ";
				cin >> findname;   // 이체할 사람

				m = 100; // m값 초기화

				for (j = 0; j < people; j++)
				{
					if ( findname== (account + j)->getName())
						m = j;    // 입력한 이름과 계좌주의 이름이 같으면 해당 인덱스 값을 m에 대입
				}

				if (m == 100)  // 입력한 이름이 존재하지 않을 경우
					break;

				cout << "얼마를 보내겠습니까? >> ";
				cin >> send;  // 보낼 금액
				(account + k)->send((account + m)->getName(), send);
				cout << "비밀번호를 입력해주세요 >> ";
				(account + k)->pwcheck2();   // 비밀번호 입력
				cout << endl << (account + m)->getName() << "님께 " << send << "원을 보냈습니다." << endl;
				(account + m)->receive(send);
				cout << endl << "현재 " << (account + k)->getName() << "님의 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl;   // 잔액 출력
				break;
			}
			case 4:  // 잔액 확인
				cout << (account + k)->getName() << "님의 현재 잔액은 " << (account + k)->getMoney() << "원 입니다." << endl; break;
			case 5: break;   // 프로그램 종료
			}
		}
	}

	cout << "ATM을 종료합니다." << endl;

	return 0;
}
		
	






ATM::ATM() {};


void ATM::deposit() {

	int depositmoney;
	cin >> depositmoney; //입금 금액
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
			cout << "비밀번호가 서로 다릅니다." << endl << endl;
			cout << "비밀번호를 입력해주세요>>";
				cin >> check;
		}
	}
}

void ATM::pwcheck2() {
	cin >> check;
	if (check != pw) {
		while (check != pw) {
			cout << "비밀번호가 틀렸습니다." << endl;
			cout << "비밀번호를 입력해주세요 >>";
			cin >> check;
		}
	}
}