#include <iostream>
#include<string>
using namespace std;

class PhoneBook
{
private:
    string number; // ��ȭ��ȣ
    string name; // �̸�
public:
    PhoneBook(); // ������
    void setPnum(string number); // ��ȭ��ȣ ����
    void setName(string name); // �̸� ����
    void addPhone(string name, string number); // �̸��� ��ȭ��ȣ ����
    string getPnum(); // ��ȭ��ȣ ��������
    string getName(); // �̸� ��������
    void editPnum(string number); 
};

class PhoneBook2
{
private:
    PhoneBook* phone; // ��ü �迭 ������ ���� ����
    int size; // ��ü �迭�� ũ��
public:
    PhoneBook2(int num); 
    void showAll(); // ��ȭ��ȣ�� ��� ����
    void searchPnum(); // ��ȭ��ȣ ã��
    void addPnum(); // ��ȭ��ȣ ��ü �߰� ����(�迭�� ���� ���� +1)
    void editPnum(); // ��ȭ��ȣ ����
};

int main(void)
{
    int num; // ��ȭ��ȣ ��
    int menu = 0; // �޴� ��ȣ �޴� ����

    cout << " --- SWING ��ȭ��ȣ�� ---" << endl;
    cout << "������ ��ȭ��ȣ�� ���� �Է����ּ��� >> ";
    cin >> num;
    PhoneBook2 pb(num);
    while (menu != 5)
    {
        cout << endl << " --- SWING ��ȭ��ȣ�� --- " << endl;
        cout << "1. ��ȭ��ȣ�� ����" << endl;
        cout << "2. ��ȭ��ȣ �˻�" << endl;
        cout << "3. ��ȭ��ȣ �߰��ϱ�" << endl;
        cout << "4. ��ȭ��ȣ �����ϱ�" << endl;
        cout << "5. ����" << endl;

        cout << "��ȣ�� �Է����ּ��� >> ";
        cin >> menu;

        switch (menu)
        {
        case 1: pb.showAll(); break;
        case 2: pb.searchPnum(); break;
        case 3: pb.addPnum(); break;
        case 4: pb.editPnum(); break;
        case 5: cout << endl << endl << "���α׷��� �����մϴ�." << endl; break;
        default: cout << endl << endl << "�߸� �Է��ϼ̽��ϴ�." << endl;
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
    phone = new PhoneBook[size]; //��ü �迭 ���� ����

    for (i = 0; i < num; i++) // �̸��� ��ȭ��ȣ �Է�
    {
        cout << i + 1 << "��° ����� �̸��� �Է����ּ��� >> ";
        cin >> name1;
        phone[i].setName(name1);
        cout << i + 1 << "��° ����� ��ȭ��ȣ�� �Է����ּ��� >> ";
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
    cout << "������ ��ȣ�� �˻��ϰڽ��ϱ�? >> ";
    cin >> findname;

    for (int i = 0; i < size; i++) {
        if (findname == phone[i].getName()) {
            find++;
            break;
        }
    }
    if (find == 0) {
        cout << "����ó�� �������� �ʽ��ϴ�.";
    }
    else {
        cout << findname << "���� ��ȭ��ȣ : " << phone[find].getPnum() << endl;
    }
}

void PhoneBook2::addPnum()
{
    string newName, newNumber;
    int i;

    cout << endl << endl << "�̸��� �Է����ּ��� >> ";
    cin >> newName;
    cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
    cin >> newNumber;

    PhoneBook* tmp = new PhoneBook[size + 1]; 
    for (i = 0; i < size; i++) 
        tmp[i] = phone[i]; //�迭 ����

    delete[] phone; 
    size++; 

    phone = new PhoneBook[size];
    for (i = 0; i < size; i++) 
        phone[i] = tmp[i];

    phone[size - 1].addPhone(newName, newNumber); // ��ȭ��ȣ �߰�

    cout << "��ȭ��ȣ�� �߰��Ǿ����ϴ�." << endl;
}


void PhoneBook2::editPnum() {
    int count = -1;
    string editname, change;
    cout << endl << endl;
    cout << "������ ��ȣ�� �����ϰڽ��ϱ�? >> ";
    cin >> editname;
    for (int i = 0; i < size; i++) {
        count++;
        if (editname == phone[i].getName()) {
            break;
        }
    }
    if (count >= size) {
        cout << "����ó�� �������� �ʽ��ϴ�.";
    }
    cout << "������ ��ȣ�� �Է����ּ��� >> ";
    cin >> change;

    phone[count].editPnum(change);
    cout << "��ȭ��ȣ�� ����Ǿ����ϴ�. " << endl;
}