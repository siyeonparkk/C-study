#include <iostream>
#include<algorithm>

using namespace std;
void Print(int* arr);

int main() {
	int arr[5];
	cout << "���� �ټ����� �Է����ּ���(����� ����)";
	for (int i = 0; i < 5; i++){
		cin >> arr[i];
}
	cout << "<���� ��>";
	Print(arr); //���� �� ���

	sort(arr, arr + 5);
		cout << "\n<���� ��>";

	Print(arr);




}

void Print(int *arr){
	for (int i = 0; i < 5; i++) {
		
		cout << '\n'<<i + 1 << '.' << arr[i] << endl;
	}
}