#include <iostream>

using namespace std;

void main(float x, int y)

{


	cout << "Firstnumber ";

	cin >> x;

	char ch;

	cout << "Secondnumber ";

	cin >> y;



	cout << "=====계산결과=====";

	cout << x << "+" << y << "=" << x + y << endl;

	cout << x << "-" << y << "=" << x - y << endl;

	cout << x << "*" << y << "=" << x * y << endl;


	float result;

	result = x / y;

	cout << x << "/" << y << "=" << result << endl;





}