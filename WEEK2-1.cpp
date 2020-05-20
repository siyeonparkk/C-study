#include <iostream>
using namespace std;

int main()

{

	int arr[5];//숫자를 5번 입력받는다
	int num1 = 0;//홀수 개수
	int num2 = 0;//짝수 개수


	for (int i = 0; i < 5; i++)

	{
		cout << "숫자를 입력해주세요:";
		cin >> arr[i];//입력을 배열로 받는다.

	}
	cout << endl;
	cout << "-----------결과------------" << endl;
	cout << "홀수: ";

	for (int i = 0; i < 5; i++)

	{
		if (arr[i] % 2 == 1)//arr안에 홀수가 있을 경우

		{

			cout << arr[i] << " "; //" "을 사용해서 띄어쓰기 출력함
			num1++; //홀수 개수

		}
	}

	cout << "\n홀수는 총 " << num1 << "개 입니다." << endl;
	cout << "짝수: ";

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 ==0 )//arr안에 짝수가 있을경우

		{

			cout << arr[i] << " "; //" "을 사용해서 띄어쓰기 출력함
			num2++;//짝수 개수

		}

	}

	cout << "\n짝수는 총 " << num2 << "개 입니다." << endl;





}