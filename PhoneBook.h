#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class PhoneBook {  // PhoneBook Å¬·¡½º ¼±¾ð
	string name;  
	string phone_number;

public:
	void addPhone();  // ¸â¹ö ÇÔ¼ö
	void editPhone();  // ¸â¹ö ÇÔ¼ö
	void getPnum();  // ¸â¹ö ÇÔ¼ö
	void getName();  // ¸â¹ö ÇÔ¼ö
};

#endif