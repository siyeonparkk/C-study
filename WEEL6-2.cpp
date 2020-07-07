#include <iostream>
#include<string>
using namespace std;

class PhoneBook
{
private:
    string number; // 전화번호
    string name; // 이름
public:
    PhoneBook(); // 생성자
    void setPnum(string number); // 전화번호 저장
    void setName(string name); // 이름 저장
    void addPhone(string name, string number); // 이름과 전화번호 저장
    string getPnum(); // 전화번호 가져오기
    string getName(); // 이름 가져오기
    void editPnum(string number); 
};

class PhoneBook2
{
private:
    PhoneBook* phone; // 객체 배열 생성을 위한 선언
    int size; // 객체 배열의 크기
public:
    PhoneBook2(int num); 
    void showAll(); // 전화번호부 목록 보기
    void searchPnum(); // 전화번호 찾기
    void addPnum(); // 전화번호 객체 추가 생성(배열의 원소 개수 +1)
    void editPnum(); // 전화번호 수정
};

int main(void)
{
    int num; // 전화번호 수
    int menu = 0; // 메뉴 번호 받는 변수

    cout << " --- SWING 전화번호부 ---" << endl;
    cout << "저장할 전화번호의 수를 입력해주세요 >> ";
    cin >> num;
    PhoneBook2 pb(num);
    while (menu != 5)
    {
        cout << endl << " --- SWING 전화번호부 --- " << endl;
        cout << "1. 전화번호부 보기" << endl;
        cout << "2. 전화번호 검색" << endl;
        cout << "3. 전화번호 추가하기" << endl;
        cout << "4. 전화번호 수정하기" << endl;
        cout << "5. 종료" << endl;

        cout << "번호를 입력해주세요 >> ";
        cin >> menu;

        switch (menu)
        {
        case 1: pb.showAll(); break;
        case 2: pb.searchPnum(); break;
        case 3: pb.addPnum(); break;
        case 4: pb.editPnum(); break;
        case 5: cout << endl << endl << "프로그램을 종료합니다." << endl; break;
        default: cout << endl << endl << "잘못 입력하셨습니다." << endl;
        }
    }
}

PhoneBook::PhoneBook()
{}

void PhoneBook::setPnum(string number)
{
    this->number = number;
}

void PhoneBook::setName(string name)
{
    this->name = name;
}

void PhoneBook::addPhone(string name, string number)
{
    this->number = number;
    this->name = name;
}

string PhoneBook::getPnum()
{

    return number;
}

string PhoneBook::getName()
{
    return name;
}

void PhoneBook::editPnum(string number)
{
    this->number = number;
}

PhoneBook2::PhoneBook2(int num)  
{
    int i;
    string name1, number1;
    size = num;
    phone = new PhoneBook[size]; //객체 배열 동적 생성

    for (i = 0; i < num; i++) // 이름과 전화번호 입력
    {
        cout << i + 1 << "번째 사람의 이름을 입력해주세요 >> ";
        cin >> name1;
        phone[i].setName(name1);
        cout << i + 1 << "번째 사람의 전화번호를 입력해주세요 >> ";
        cin >> number1;
        phone[i].setPnum(number1);
        cout << endl;
    }
}

void PhoneBook2::showAll()   
{
    cout << endl << endl;
    int i;
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << phone[i].getName();
        cout << "::" << phone[i].getPnum() << endl;
    }
}

void PhoneBook2::searchPnum() {
    string findname;
    int find = 0;

    cout << endl << endl;
    cout << "누구의 번호를 검색하겠습니까? >> ";
    cin >> findname;

    for (int i = 0; i < size; i++) {
        if (findname == phone[i].getName()) {
            find++;
            break;
        }
    }
    if (find == 0) {
        cout << "연락처가 존재하지 않습니다.";
    }
    else {
        cout << findname << "님의 전화번호 : " << phone[find].getPnum() << endl;
    }
}

void PhoneBook2::addPnum()
{
    string newName, newNumber;
    int i;

    cout << endl << endl << "이름을 입력해주세요 >> ";
    cin >> newName;
    cout << "전화번호를 입력해주세요 >> ";
    cin >> newNumber;

    PhoneBook* tmp = new PhoneBook[size + 1]; 
    for (i = 0; i < size; i++) 
        tmp[i] = phone[i]; //배열 복사

    delete[] phone; 
    size++; 

    phone = new PhoneBook[size];
    for (i = 0; i < size; i++) 
        phone[i] = tmp[i];

    phone[size - 1].addPhone(newName, newNumber); // 전화번호 추가

    cout << "전화번호가 추가되었습니다." << endl;
}


void PhoneBook2::editPnum() {
    int count = -1;
    string editname, change;
    cout << endl << endl;
    cout << "누구의 번호를 수정하겠습니까? >> ";
    cin >> editname;
    for (int i = 0; i < size; i++) {
        count++;
        if (editname == phone[i].getName()) {
            break;
        }
    }
    if (count >= size) {
        cout << "연락처가 존재하지 않습니다.";
    }
    cout << "변경할 번호를 입력해주세요 >> ";
    cin >> change;

    phone[count].editPnum(change);
    cout << "전화번호가 변경되었습니다. " << endl;
}