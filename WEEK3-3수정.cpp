#include <iostream>
using namespace std;



void sort(int* arr)
{
	int i, j = 0;
	int tmp;

	for (i = 0; i < 5; i++)  //���� for���� ����Ͽ� �ּڰ��� �Ǻ��Ѵ�.


	{

		for (j = i + 1; j < 5; j++) 


		{

			if (arr[i] > arr[j]) //�ּڰ��� �Ǻ��ϴ� ����
	

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

	cout << "< ���� �� > " << endl << endl; //���� �� ���ڵ� ���

	int i;

	for (i = 0; i < 5; i++) 

		cout << i + 1 << ". " << arr[i] << endl;

}



int main(void)

{

	int i;
	int arr[5];

	cout << "���� �ټ����� �Է����ּ���(����� ����) >> ";

	for (i = 0; i < 5; i++)
		cin >> arr[i]; //�迭�� �Է� ����


	cout << endl << "< ���� �� >" << endl << endl;

	for (i = 0; i < 5; i++) 
		cout << i + 1 << ". " << arr[i] << endl;

	cout << endl << endl;



	sort(arr); //sort���� �Լ� ȣ��

	print(arr); //������ �����



}