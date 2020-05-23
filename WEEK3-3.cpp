#include <iostream>
#include<algorithm>

using namespace std;
void Print(int* arr);

int main() {
	int arr[5];
	cout << "숫자 다섯개를 입력해주세요(띄어쓰기로 구분)";
	for (int i = 0; i < 5; i++){
		cin >> arr[i];
}
	cout << "<정렬 전>";
	Print(arr); //정렬 전 출력

	sort(arr, arr + 5);
		cout << "\n<정렬 후>";

	Print(arr);




}

void Print(int *arr){
	for (int i = 0; i < 5; i++) {
		
		cout << '\n'<<i + 1 << '.' << arr[i] << endl;
	}
}