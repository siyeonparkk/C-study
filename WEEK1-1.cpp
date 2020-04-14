#include <iostream>
#include <string>

using namespace std;
int main() {
	string name;
	string birth;
	int age;
	string part;


	cout << "이름을 입력하세요:";
	cin >> name;
	cout << "생일을 입력하세요:";
	getline(cin, birth);
	cin.ignore(100, '\n');

	cout << "나이를 입력하세요:";
	cin >> age;
	cin.ignore(22, '\n');


	cout << "소속 학과를 입력하세요:";
	cin >> part;

	cin.ignore(100, '\n');

	cout << "<회원 정보>" << '\n';
	cout << "===============================================" << '\n';
	cout << "이름:";
	cout << name << '\n';

	cout << "생일:";
	cout << birth << '\n';

	cout << "나이:";
	cout << age << '\n';

	cout << "소속 학과:";
	cout << part << '\n';

}