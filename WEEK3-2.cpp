#include<iostream>
using namespace std;

void swap(int* px, int* py) {

	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;

}



int main(int *px, int *py) {

	int a = 0;
	int b = 0;

	cout << "first number >>";
	cin >> a;

	cout << "second number >>";
	cin >> b;
	

	cout << "\nswap Àü" << a << " " << b << endl;
	swap(&a, &b);
	cout<<"swap ÈÄ" << a <<" "<< b;


	return 0;
}