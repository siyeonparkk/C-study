#include<iostream>

#include<string>

using namespace std;



class phonebook

{

private:

	string name;

	string phonenum;



public:

	void addPhone();

	void editPhone();

	string getPnum();

	string getName();

};



int main(void)

{

	phonebook p;

	p.addPhone();



	int n;

	do 

	{

		cout << endl << "1. 최신 등록 전화번호 조회" << endl;

		cout << "2. 최신 등록 전화번호 수정" << endl;

		cout << "3. 종료 >> ";

		cin >> n;



		switch (n)

		{

		case 1:   //전화번호 조회

			cout << p.getName() << "::" << p.getPnum() << endl;

			break;

		case 2:   //전화번호 수정

			p.editPhone();

		}

	} while (n != 3); //3을 입력하면 종료

}