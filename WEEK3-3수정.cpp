#include <iostream>
using namespace std;



void sort(int* arr)
{
	int i, j = 0;
	int tmp;

	for (i = 0; i < 5; i++)  //이중 for문을 사용하여 최솟값을 판별한다.


	{

		for (j = i + 1; j < 5; j++) 


		{

			if (arr[i] > arr[j]) //최솟값을 판별하는 구문
	

			{
				tmp = arr[i]; 
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}

	}

}



void print(int* arr)

{

	cout << "< 정렬 후 > " << endl << endl; //정렬 후 숫자들 출력

	int i;

	for (i = 0; i < 5; i++) 

		cout << i + 1 << ". " << arr[i] << endl;

}



int main(void)

{

	int i;
	int arr[5];

	cout << "숫자 다섯개를 입력해주세요(띄어쓰기로 구분) >> ";

	for (i = 0; i < 5; i++)
		cin >> arr[i]; //배열로 입력 받음


	cout << endl << "< 정렬 전 >" << endl << endl;

	for (i = 0; i < 5; i++) 
		cout << i + 1 << ". " << arr[i] << endl;

	cout << endl << endl;



	sort(arr); //sort정렬 함수 호출

	print(arr); //정렬후 재출력



}