#include<iostream>

using namespace std;

int main() {

	int x, y;

	cout << "First number>>";
	cin >> x;
	cin.ignore(100, '\n');
	cout << "Second number>>";
	cin >> y;
	cin.ignore(100, '\n');

	cout << "============��� ���====================" << endl;
	cout << x << "+" << y << "=" << x + y << endl;
	cout << x << "-" << y << "=" << x - y << endl;
	cout << x << "*" << y << "=" << x * y << endl;
	cout << x << "/" << y << "=" << x / y;


}