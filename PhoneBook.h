#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class PhoneBook {  // PhoneBook Ŭ���� ����
	string name;  
	string phone_number;

public:
	void addPhone();  // ��� �Լ�
	void editPhone();  // ��� �Լ�
	void getPnum();  // ��� �Լ�
	void getName();  // ��� �Լ�
};

#endif